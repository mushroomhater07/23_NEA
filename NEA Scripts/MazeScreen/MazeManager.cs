using System;
using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks;
using TMPro;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;
using System.Linq;
using System.Security.Cryptography;
using algorithm;
using UnityEngine.SceneManagement;
using UnityEngine.Serialization;

public class MazeManager : MonoBehaviour
{
    [Space(20)]
    
    [Header("UI")]
    private GameObject characterUI,empty;
    [SerializeField] private GameObject characterSelectionUI,mainchar;
    
    private  List<Camera> cams = new List<Camera>();
    private GameObject player;
    private characterSpecification[] character;
    private int currentselection = 0;
    private int currentAttackSelection = 0;
    [SerializeField] private Button selectcharButton;
    private Inventory inven;
    private int _angle, _monsterKilled = 0;
    private CQueue open_gate_order;
    private bool opennow;
    private Vector3 playerPos;
    private Setting _setting;
    private string _password;
    private Sprite[] sprites;
    [SerializeField] private Sprite sprite1, sprite2;
    [SerializeField]private Image attackSelection;
    [SerializeField] private TMP_Text startAt, NextGate,NextMonster,counting, monsterPrompt;

    public int Angle
    {
        get => _angle;
    }

    public Setting Setting1
    {
        get => _setting;
        set => _setting = value;
    }

    public int MonsterKilled
    {
        get => _monsterKilled;
        set => _monsterKilled = value;
    }

    public string Password
    {
        get => _password;
        set => _password = value;
    }

    public void Dead()
    {
        Singleton.Instance.init();
        Singleton.Instance.GameOver = true;
        // Singleton.LoadScreenclass.LoadScreen(true, false, SceneManager.GetActiveScene().buildIndex + 1, true, true);
        SceneManager.LoadScene(4);
        Destroy(FindObjectOfType<playerhealth>());
    }
    
    public void spawnMonster()
    {
        
        float x = Random.Range(0f, 40f) - 20f, z = Random.Range(0f, 40f) - 20f;int mons = Random.Range(0,1);
        GameObject[] monster = { Resources.Load<GameObject>("Tiny"), Resources.Load<GameObject>("Big") };
        Instantiate(monster[mons],player.transform.position + new Vector3(x, 0, z),player.transform.rotation, GameObject.Find("monsterSpawner").gameObject.transform);
        // Debug.Log(player.transform.position);
        // // Debug.Log(player.transform.position + new Vector3(x, 0, z));
        // float Naturalx = Random.Range(15f, 30f) , Naturalz = Random.Range(15f, 30f);
        // float randX = Random.Range(-10f, 10f), randZ = Random.Range(-10f, 10f), Randmons = Random.Range(-10f, 10f);
        // float x, z; int mons1 =0 ;
        // if (randX > 0) x = Naturalx;else x = -Naturalx;
        // if (randZ > 0) z = Naturalz;else z = -Naturalz;
        // if (Randmons > 0) mons1 = 0;else mons1 = 1;
    }
    private void Awake()
    {
            // characterSelectionUI = GameObject.Find("characterSelection");
            // mainchar = GameObject.Find("maincharacter");
            empty = new GameObject();
        characterUI = Resources.Load<GameObject>("UI/charactercard");
        selectcharButton.onClick.AddListener(SelectedCharacter);
        _setting = FindObjectOfType<Setting>();
        monsterPrompt.enabled = false;
        // Time.timeScale = 3f;
    }

    public void MonsterPrompt(bool show)
    {
        if (show) monsterPrompt.enabled = true;
        else monsterPrompt.enabled = false;
    }
    private void Start()
    {
        Singleton.Instance.init();
        character = GetComponent<CharacterDataBase>().characters;
        //load setting
        if (Singleton.Instance.FirstTime)
        {
            // load default
            FirstTime();
        }
        else{
            // Debug.Log(Singleton.Instance);
             var result = Task.Run(() =>
                 Singleton.Localdb.Query("SELECT characterSelection, difficulty, monsterKilled,time,playerX,playerY,playerZ FROM GAMEDATA",
                     $"Save{Singleton.Instance.LoadNumber}.sqlite3")).Result.Split(new char[] { ',', ';' });
             Destroy(characterSelectionUI);
             try{playerPos = new Vector3(int.Parse(result[4]), int.Parse(result[5]), int.Parse(result[6]));}catch{}

             FindObjectOfType<Clock>().time = float.Parse(result[3]);
             _monsterKilled = int.Parse(result[2]);
             // Debug.Log(result[0]);
             currentselection = int.Parse(result[0]);
             Singleton.Instance.Difficulty = int.Parse(result[1]);
             StartGame();
             // setting change apply
             _setting.LoadSetting();
        }
        UpdateScore();
        Singleton.HealthClass.maxHealth = 100f;
        Singleton.HealthClass.chipspeed = 1.2f;
    }

    private void ShowCharacterPopup(int index)
    {
        characterSpecification details = character[index];
        Singleton.Instance.ShowDetail(details.charName,
            $"{details.charDescription}\n speed: {details.speed}\n Inventory:{details.InventorySize}",
            details.charImage);   
    }

    private void Selection(int index)
    {
        
        currentselection = index;
        

    }

    public void SelectedCharacter()
    {
        if(currentselection < 0) Singleton.Instance.ShowError("No selected character");
        else
        {
            Task.Run(() =>
            {
                Singleton.Localdb.Query($"UPDATE GAMEDATA SET characterSelection = {currentselection};",
                    $"Save{Singleton.Instance.LoadNumber}.sqlite3");
            }).Wait();
            Destroy(characterSelectionUI);
            StartGame();
        }
    }

    
    
    private void Maze()
    {
        int[] mazeX = new int[8] { 50, 50, 50, 0, -50, -50, -50, 0 };
        int[] mazeY = new int[8] { 50, 0, -50, -50, -50, 0, 50, 50 };
        int[] mazeZ = new int[8] { 90, 90, 180, 180, 270, 270, 0, 0 };
        GameObject mazeEmpty;
        Transform ObjParent = GameObject.Find("objs").transform;
        for (int i = 0; i < 8; i++)
        {
            mazeEmpty = Instantiate(empty);
            mazeEmpty.name = "maze" + i;
            mazeEmpty.transform.parent = ObjParent;
            mazeEmpty.transform.position = new Vector3(mazeX[i], 0, mazeY[i]);

            Maze mazeInstance = mazeEmpty.AddComponent<Maze>();
            mazeInstance.sizeX = Singleton.Instance.Difficulty;
            mazeInstance.sizeZ = Singleton.Instance.Difficulty;
            mazeInstance.cellPrefab = Resources.Load<Mazecell>("Maze/floor");
            mazeInstance.wallPrefab = Resources.Load<WallCell>("Maze/wall");
            MazeGeneration gen;
            mazeInstance.Generate();

            if (Singleton.Instance.FirstTime)
            {
                gen = mazeEmpty.AddComponent<MazeGeneration>();
                gen.myParent = mazeEmpty.transform;
                gen.Wall = mazeInstance.walls;
                gen.Cell = mazeInstance.cells;
                try
                {
                    gen.Run();
                    Task.Run(() => Singleton.Localdb.Query($"ALTER TABLE GAMEDATA ADD  Maze{i} TEXT",
                        $"Save{Singleton.Instance.LoadNumber}.sqlite3")).Wait();
                }
                catch (Exception e)
                {
                    Debug.Log(e);
                }

                string walltemp = JsonConvert.SerializeObject(gen.Wall);
                // Debug.Log(gen.Wall.Count +$"gen{i}");
                Task.Run(() => Singleton.Localdb.Query($"UPDATE GAMEDATA SET Maze{i} = '{walltemp}'",
                    $"Save{Singleton.Instance.LoadNumber}.sqlite3")).Wait();

            }


            List<string> resultwall = JsonConvert.DeserializeObject<List<string>>(Task.Run(() =>
                Singleton.Localdb.Query($"SELECT Maze{i} FROM GAMEDATA",
                    $"Save{Singleton.Instance.LoadNumber}.sqlite3")).Result.Split(';')[0]);
            List<string> wall = new List<string>();
            for (int x = 0; x < Singleton.Instance.Difficulty; x++)
            {
                for (int z = 0; z < Singleton.Instance.Difficulty; z++)
                {
                    // yield return delay;
                    wall.Add(String.Format("Wall {0}-{1}-V", x, z));
                    wall.Add(String.Format("Wall {0}-{1}-H", x, z));
                }
            }

            wall = wall.Except(resultwall).ToList();
            foreach (var VARIABLE in wall)
            {
                try
                {
                    // Debug.Log(mazeEmpty.transform.Find(VARIABLE));
                    Destroy(mazeEmpty.transform.Find(VARIABLE).gameObject);

                }
                catch (Exception e)
                {
                }
            }

            mazeInstance.transform.localScale = new Vector3(50f / mazeInstance.sizeX, 1f, 50f / mazeInstance.sizeZ);
            GameObject gate = Instantiate(Resources.Load<GameObject>("Maze/Gate"), mazeEmpty.transform);
            // Debug.Log("gate?");Debug.Log(Singleton.Instance.FirstTime);
            gate.transform.localScale = new Vector3(mazeInstance.sizeX / 50f, 1f, mazeInstance.sizeZ / 50f);
            gate.transform.localPosition = new Vector3(mazeInstance.sizeX, 0, -mazeInstance.sizeX);
            mazeEmpty.transform.rotation = Quaternion.Euler(0, mazeZ[i], 0);
            //  Debug.Log(JsonConvert.SerializeObject(mazeInstance.walls));
            // Debug.Log(mazeInstance);
            // Debug.Log(mazeEmpty);
            // mazeEmpty.gameObject.AddComponent<djk>().djkinit(2, 0, 3, Singleton.Instance.Difficulty - 1, resultwall,
            //     mazeInstance.cells);
        }

        open_gate_order = new CQueue(true, 8);
            _password = Task.Run(() => Singleton.Localdb.Query("SELECT orderOpening FROM GAMEDATA"
                , $"Save{Singleton.Instance.LoadNumber}.sqlite3")).Result.Split(new char[] { ';', ',' })[0];
            foreach (var VARIABLE in _password)
            {
                open_gate_order.Enqueue(VARIABLE - 48);
            }
            startAt.text = open_gate_order.Peek().ToString();
        
    }
    
    public void StartGame()
    {
        
        Maze();
        // inven = FindObjectOfType<Inventory>();
        // inven.Setup(character[currentselection].InventorySize);
        // Button backpack = GameObject.Find("InvenButton").GetComponent<Button>();
        // backpack.onClick.AddListener(delegate { inven.ShowHide(true); });

        //add a camera and attach to the main player
        Camera cam;
         try{mainchar.transform.position = playerPos;}catch{}
        player = Instantiate(character[currentselection].actualObject, mainchar.transform);
        minimap mini = mainchar.AddComponent<minimap>(); 
        SpriteRenderer minimapPlayerLoc = Instantiate(empty,player.transform).AddComponent<SpriteRenderer>();
        minimapPlayerLoc.sprite = Resources.Load<Sprite>("Sprite/Star");
        minimapPlayerLoc.transform.position = new Vector3(0, 6.7f, 0);
        minimapPlayerLoc.transform.rotation = Quaternion.Euler(new Vector3(90f,0,0));
        minimapPlayerLoc.transform.localScale = new Vector3(0.5f, 0.5f, 0.1f);
        minimapPlayerLoc.color = Color.cyan;
        minimapPlayerLoc.gameObject.layer = LayerMask.NameToLayer("Minimap");
        mini.Setup();
        // player.AddComponent<CapsuleCollider>();

        Rigidbody rb = FindObjectOfType<Rigidbody>();
        if(rb == null) rb = mainchar.AddComponent<Rigidbody>();
        rb.mass = 50f; rb.drag = 10f;
        rb.angularDrag = 10f; rb.useGravity = true;
        rb.collisionDetectionMode = CollisionDetectionMode.ContinuousDynamic;
        rb.constraints = RigidbodyConstraints.FreezePositionY | RigidbodyConstraints.FreezeRotationX |
                         RigidbodyConstraints.FreezeRotationZ;
        string[] camName = new[] { "FPP", "TPP" };
        Vector3[] camLocation = new[] { new Vector3(0, 1.6f,0), new Vector3(0.46f, 1.88f,-1.5f) };
        Vector3[] camRotation = new[] { new Vector3(0, 0, 0), new Vector3(16.1f, 0, 0) };
        for (int i = 0; i < 2; i++)
        {
            cam = Instantiate(empty, player.transform).AddComponent<Camera>();
            cam.name = camName[i];
            cam.cullingMask = ~(1 << LayerMask.NameToLayer("Minimap"));
            cam.transform.localPosition = camLocation[i];
            cam.transform.localRotation = Quaternion.Euler(camRotation[i]);
            cams.Add(cam);
        }

        movement movementScript = mainchar.AddComponent<movement>();
        movementScript.walkspeed = 0.14f;
        movementScript.jumpgravity = 9.8f;
        movementScript.jumpheight = 5f;
        movementScript.gravityspeed = 9.8f;
        movementScript.crouchwalk = 0.24f;
        movementScript.crouchheight = 0.5f;
        turnaround turnScript = mainchar.AddComponent<turnaround>();
        turnScript.cam = cams[0];
        switchcam switchcamScript = gameObject.AddComponent<switchcam>();
        switchcamScript.cams = cams.ToArray();
        Button switchcamButton = GameObject.Find("SwitchCam").GetComponent<Button>();
        switchcamButton.onClick.AddListener(switchcamScript.ChangeCamera);
        // left shift (<<) to pick a bit
        // bitwise OR (|) to enable certain bits of a mask
        //     bitwise AND (&) to disable certain bits of a mask
        //     bitwise NOT (~) to negate a mask
                                 
        //UI
        Button jumpButton = GameObject.Find("Jump").GetComponent<Button>();
        jumpButton.onClick.AddListener(movementScript.Jumpbutton);
        Button crouchbutton = GameObject.Find("Crouch").GetComponent<Button>();
        crouchbutton.onClick.AddListener(movementScript.crouch);
        // GameObject wall = Resources.Load<GameObject>("Maze/wall");
        // Vector3 centerPoint = Vector3.zero;
        // float rotationSpeed = 5f;
        // for (int i = 1; i < 37; i++)
        // {
        //     GameObject instantiateWall = Instantiate(wall, GameObject.Find("outerWall").transform);
        //     instantiateWall.name = $"outerWall{i}";
        //     instantiateWall.transform.localScale = new Vector3(20, 1, 1);
        //     instantiateWall.transform.position = new Vector3(150f - (150f / 36 * i), 0, 150f / 36 * i);
        //     Debug.Log(150f- (150f /i));
        //     instantiateWall.transform.RotateAround(centerPoint, Vector3.up, 180/36*i);
        // }
        // Vector3[] exitpos = new Vector3[4]
        // {
        //     new Vector3(-4, 3.75f, 166.8f), new Vector3(4, 3.75f, 166.8f), new Vector3(0, 7.5f, 166.8f),
        //     new Vector3(0, 0, 166.8f)
        // };
        // Vector3[] exitrotate = { new Vector3(0, 0, 90),new Vector3(0, 0, 90),Vector3.zero,Vector3.zero};
        // Vector3[] exitscale = {
        //     new Vector3(8, 0.01f, 50), new Vector3(8, 0.01f, 50), new Vector3(8, 0.01f, 50), new Vector3(8, 0.01f, 50)
        // };
        
        GameObject escapeGp = empty;
        // for (int i = 0; i < 4; i++)
        // {
        //     GameObject escape = Instantiate(Resources.Load<GameObject>("Cube"));
        //     escape.transform.position = exitpos[i];
        //     escape.transform.localScale = exitscale[i];
        //     escape.transform.rotation = Quaternion.Euler(exitrotate[i]);
        //     escape.name = $"escapetunnel{i}";
        //     escape.transform.parent = escapeGp.transform;
        // }
        escapeGp = Instantiate(Resources.Load<GameObject>("Maze/escapeGp"));
        _angle = int.Parse(Task
            .Run(() => Singleton.Localdb.Query("SELECT exit FROM GAMEDATA",
                $"Save{Singleton.Instance.LoadNumber}.sqlite3")).Result.Split(new char[] { ',', ';' })[0]);
        // escapeGp.name = "escapeGp";
        escapeGp.transform.localRotation = Quaternion.Euler( _angle * Vector3.up);
        escapeGp.transform.parent = GameObject.Find("objs").transform;
        // Singleton.Instance.init();
        if(Singleton.Instance.FirstTime)
        {
            Singleton.Instance.init();
            Singleton.Instance.ContinuePrompt = true;
            Back();
            
        }
        _setting.LoadSetting();
        openGate();
        }

    public void OpenPassword()
    {
        
    }
    private void FirstTime()
    {//exit
        try
        {
            Task.Run(() => Singleton.Localdb.Query("ALTER TABLE GAMEDATA ADD exit INTEGER ", $"Save{Singleton.Instance.LoadNumber}.sqlite3")).Wait();
        }
        catch (Exception e) { }
        int ranNumber = Random.Range(1, 360) ;
        Task.Run(() => Singleton.Localdb.Query(
            $@"UPDATE GAMEDATA SET exit= {ranNumber};", $"Save{Singleton.Instance.LoadNumber}.sqlite3")).Wait();


        //selection Screen
        
        // Debug.Log(character);
        GameObject showcase = GameObject.Find("charShowCase");
        for (int i = 0; i < character.Length; i++)
        {
            characterSpecification details = character[i];
            int dummyi = i;
            GameObject tempChar = Instantiate(characterUI, showcase.transform);
            tempChar.name = String.Format("Selector-{0}", details.actualObject.name);
            TMP_Text chartext = tempChar.GetComponentInChildren<TextMeshProUGUI>();
            chartext.text = details.charName;
            if (details.charImage != null)
            {
                Image showImage = tempChar.GetComponentInChildren<Image>();
                showImage.overrideSprite = details.charImage;
            }

            charcard selection = tempChar.GetComponentInChildren<charcard>();
            selection.popup.onClick.AddListener(() => ShowCharacterPopup(dummyi));
            selection.selection.onClick.AddListener((() => Selection(dummyi)));
        }
        int[] array = {0,1, 2, 3, 4, 5, 6, 7}; // Replace with your own array
        
// Fisher-Yates shuffle algorithm
        for (int i = array.Length - 1; i > 0; i--)
        {
            int j = Random.Range(0, i + 1);
            (array[i], array[j]) = (array[j], array[i]);
        }
        Task.Run(() => Singleton.Localdb.Query($"ALTER TABLE GAMEDATA ADD orderOpening TEXT",
            $"Save{Singleton.Instance.LoadNumber}.sqlite3")).Wait();
        string uploadData= "";
        foreach (var VARIABLE in array)
        {
            uploadData += VARIABLE.ToString();
        }
        // Debug.Log(uploadData);
        Task.Run(()=> Singleton.Localdb.Query($"UPDATE GAMEDATA SET orderOpening = '{uploadData}'",
            $"Save{Singleton.Instance.LoadNumber}.sqlite3")).Wait();
        Task.Run(() => Singleton.Localdb.Query($"ALTER TABLE GAMEDATA ADD monsterKilled INTEGER ",
            $"Save{Singleton.Instance.LoadNumber}.sqlite3")).Wait();
    }

    public void SaveLevel()
    {
        // try{ Task.Run(() => Singleton.Localdb.Query($"ALTER TABLE GAMEDATA ADD  monsterKilled INTEGER",
        //     $"Save{Singleton.Instance.LoadNumber}.sqlite3")).Wait();} catch{}
        Task.Run(()=> Singleton.Localdb.Query($"UPDATE GAMEDATA SET monsterKilled = '{_monsterKilled}'",
        $"Save{Singleton.Instance.LoadNumber}.sqlite3")).Wait();
        Vector3 tempPos = player.transform.position;
        Task.Run(()=> Singleton.Localdb.Query(@$"UPDATE GAMEDATA SET playerX = {tempPos.x},
 playerY = {tempPos.y},playerZ= {tempPos.z}",
            $"Save{Singleton.Instance.LoadNumber}.sqlite3")).Wait();
        try{Task.Run(() => Singleton.Localdb.Query($"ALTER TABLE GAMEDATA ADD time FLOAT ",
            $"Save{Singleton.Instance.LoadNumber}.sqlite3")).Wait();}catch{}

        float time = FindObjectOfType<Clock>().Time1;
        Task.Run(() => Singleton.Localdb.Query($"UPDATE GAMEDATA SET time = {time} ",
            $"Save{Singleton.Instance.LoadNumber}.sqlite3")).Wait();
    }
        
    public void Attack()
    {
        projectile projectile_script = FindObjectOfType<projectile>();
        switch (currentAttackSelection)
        {
            case 0:
                projectile_script.Shoot(Resources.Load<GameObject>("Item/attach/Axe_03"),player.transform,10);
            break;
            case 1:
                Debug.Log(player.transform.rotation.z);
                Instantiate(Resources.Load<GameObject>("Item/attach/Pitchfork_01"),player.transform.position + new Vector3(0.4f,0.5f,0),
                     Quaternion.Euler(Quaternion.ToEulerAngles(player.transform.rotation)+ new Vector3(90, 0, 0)),GameObject.Find("objs").transform).tag="Trap";
                break;
        }
        
        // Instantiate();
    }

    public void changeAttack(int index)
    {sprites = new[] { sprite1, sprite2 };attackSelection.sprite = sprites[currentAttackSelection];
        currentAttackSelection = index;
    }

    public void heal()
    {
        Singleton.HealthClass.changeHP(10);
    }
public void openGate()
    {
            open_gate[] instances = FindObjectsOfType<open_gate>();
            foreach (var VARIABLE in instances)
            {
                VARIABLE.Open = false;
            }

            int gateNumber = open_gate_order.Peek();
            // Debug.Log(gateNumber);
            // Debug.Log(GameObject.Find("maze" + gateNumber).GetComponentInChildren<open_gate>());
            open_gate ins = GameObject.Find("maze" + gateNumber).GetComponentInChildren<open_gate>();
            
            ins.Open = true;
            open_gate_order.Enqueue(open_gate_order.Dequeue());
            NextGate.text = open_gate_order.Peek().ToString();
    }
public void Back()
{
    SaveLevel();
    // Singleton.Instance.init();
    SceneManager.LoadScene(1); 
    // Singleton.LoadScreenclass.LoadScreen(true, false, 1,true, true,true);
    // Destroy(FindObjectOfType<pause>().gameObject);
}
public void UpdateScore()
{
    if (counting.text != _monsterKilled.ToString())
    {
        counting.text = _monsterKilled.ToString();
        Task.Run(()=> Singleton.Localdb.Query($"UPDATE GAMEDATA SET monsterKilled = '{_monsterKilled}'",
            $"Save{Singleton.Instance.LoadNumber}.sqlite3"));
    }

}
}

// private GameObject _inven;
//     _inven = FindObjectOfType<Inven>().gameObject;
//     Debug.Log(_inven);
//     _inven.SetActive(false);
//     if(_inven.activeSelf)_inven.SetActive(false);
//     else _inven.SetActive(true);
