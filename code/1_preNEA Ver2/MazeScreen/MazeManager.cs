using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class MazeManager : MonoBehaviour
{
    [Space(20)]
    
    [Header("UI")]
    [SerializeField] private GameObject characterUI;
    [SerializeField] private GameObject characterSelectionUI,empty,mainchar;

    private GameObject player;
    private characterSpecification[] character;
    private int currentselection = -1;
    private void Start()
    {
        // if(_continue){
        //     read player selection, maze detail
        // }else{
            FirstTime();
        // }
    }
    private void ShowCharacterPopup(int index)
    {
        characterSpecification details = character[index];
        Singleton.Instance.ShowDetail(details.charName,
            $"{details.charDescription}\n speed: {details.speed}\n Inventory:{details.InventorySize}",
            details.charImage);   
    }
    private void Selection(int index) { currentselection = index; }

    public void SelectedCharacter()
    {
        if(currentselection < 0) Singleton.Instance.ShowError("No selected character");
        else
        {
            Destroy(characterSelectionUI);
            Inventory inven = FindObjectOfType<Inventory>();
            inven.Setup(character[currentselection].InventorySize);
            Button backpack = GameObject.Find("InvenButton").GetComponent<Button>();
            backpack.onClick.AddListener(delegate { inven.ShowHide(true); });
            
            StartGame();
        }
    }

    public void StartGame()
    {
        
        //add a camera and attach to the main player
        Camera cam;
        player = Instantiate(character[currentselection].actualObject, mainchar.transform);
        minimap mini = mainchar.AddComponent<minimap>(); mini.empty = empty;
        SpriteRenderer minimapPlayerLoc = player.AddComponent<SpriteRenderer>();
        minimapPlayerLoc.sprite = Resources.Load<Sprite>("Sprite/Star.png");
        minimapPlayerLoc.color = Color.cyan;
        mini.Setup();
        // player.AddComponent<CapsuleCollider>();
        
        Rigidbody rb = mainchar.AddComponent<Rigidbody>();
        rb.mass = 50f; rb.drag = 10f;
        rb.angularDrag = 10f; rb.useGravity = true;
        rb.collisionDetectionMode = CollisionDetectionMode.ContinuousDynamic;
        rb.constraints = RigidbodyConstraints.FreezePositionY | RigidbodyConstraints.FreezeRotationX |
                         RigidbodyConstraints.FreezeRotationZ;
        cam = Instantiate(empty, player.transform).AddComponent<Camera>();
        cam.name = "TPP";
        cam.cullingMask = ~(1 << LayerMask.NameToLayer("Minimap"));
        cam.transform.localPosition = new Vector3(0, 1.6f, 0);
        movement movementScript = mainchar.AddComponent<movement>();
        movementScript.walkspeed = 0.21f;
        movementScript.jumpgravity = 9.8f;
        movementScript.jumpheight = 5f;
        movementScript.gravityspeed = 9.8f;
        movementScript.crouchwalk = 0.5f;
        movementScript.crouchheight = 0.5f;
        turnaround turnScript = mainchar.AddComponent<turnaround>();
        turnScript.cam = cam;
        turnScript.xspeed = 3f;
        turnScript.yspeed = 3f;
        // left shift (<<) to pick a bit
                                 // bitwise OR (|) to enable certain bits of a mask
                                 //     bitwise AND (&) to disable certain bits of a mask
                                 //     bitwise NOT (~) to negate a mask
                                 
        //UI
        Button jumpButton = GameObject.Find("Jump").GetComponent<Button>();
        jumpButton.onClick.AddListener(movementScript.Jumpbutton);
    }
    public void FirstTime(){
        //selection Screen
        character = GetComponent<CharacterDataBase>().characters;
        GameObject showcase = GameObject.Find("charShowCase");
        for (int i = 0; i < character.Length; i++)
        {
            characterSpecification details = character[i];
            int dummyi = i;
            GameObject tempChar = Instantiate(characterUI, showcase.transform);
            tempChar.name = String.Format("Selector-{0}",details.actualObject.name);
            TMP_Text chartext= tempChar.GetComponentInChildren<TextMeshProUGUI>();
            chartext.text = details.charName;
            if (details.charImage != null)
            {
                Image showImage= tempChar.GetComponentInChildren<Image>();
                showImage.overrideSprite = details.charImage;
            }
            charcard selection = tempChar.GetComponentInChildren<charcard>();
            selection.popup.onClick.AddListener(() => ShowCharacterPopup(dummyi));
            selection.selection.onClick.AddListener((() => Selection(dummyi)));
        }
        //Maze
// 		StopAllCoroutines();
// 		Destroy(mazeInstance.gameObject);
//      BeginGame();
        int[] mazeX = new int[8]{100,100,100,0,-100,-100,-100,0};
        int[] mazeY = new int[8]{100,0,-100,-100,-100,0,100,100};
        int[] mazeZ = new int[8]{90,90,180,180,270,270,0,0};
		GameObject mazeEmpty ;
        Transform ObjParent = GameObject.Find("objs").transform;
        for (int i = 0; i < 8; i++)
        {
            mazeEmpty = Instantiate(empty);
            mazeEmpty.name = "maze" + i ;
            mazeEmpty.transform.parent = ObjParent;
            mazeEmpty.transform.rotation = Quaternion.Euler(0, mazeZ[i],0);
            mazeEmpty.transform.position= new Vector3(mazeX[i],0,mazeY[i]);
            Maze mazeInstance = mazeEmpty.AddComponent<Maze>();
            mazeInstance.sizeX = 10;
            mazeInstance.sizeZ = 10;
            
            mazeInstance.cellPrefab = Resources.Load<Mazecell>("Maze/floor");
            mazeInstance.wallPrefab = Resources.Load<WallCell>("Maze/wall");
            try{ mazeInstance.Generate();}catch{}
            Debug.Log(mazeInstance);
            mazeInstance.transform.localScale = new Vector3(10f,4f,10f);
        }
        
        
    }
}
// private GameObject _inven;
//     _inven = FindObjectOfType<Inven>().gameObject;
//     Debug.Log(_inven);
//     _inven.SetActive(false);
//     if(_inven.activeSelf)_inven.SetActive(false);
//     else _inven.SetActive(true);
