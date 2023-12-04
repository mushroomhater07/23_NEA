using UnityEngine;
using UnityEngine.SceneManagement;
using Universal;

public class Singleton : MonoBehaviour
{
    [SerializeField] private float fadespeed;
    
    public static readonly localSqlite Localdb = new localSqlite();
    public static readonly UnityREST UnityAPI = new UnityREST();
    public static readonly CSharpREST CsharpAPI = new CSharpREST();
    public static Fading Fade;
    public static AudioService AudioPlayer;
    public static playerhealth HealthClass;
    public static LoadingPanel LoadScreenclass;
    private PopupPanel popup;
    [Header("MazeLoad")]
    [SerializeField] private bool _FirstTime;
    [SerializeField] private int _loadNumber;
     [SerializeField] private int difficulty; 
     [Header("Setting")]
    [SerializeField]private bool continue_prompt;
    [SerializeField] private bool loggedin, gameOver;
    public int playerID;
    public string username;
    public float time;
        void Start()
        {
            init();
            Localdb.init();
        }

        public void init()
        {
            Localdb.init();
            if (SceneManager.GetActiveScene().buildIndex == 3)
            {
                HealthClass = FindObjectOfType<playerhealth>();
                if(HealthClass == null)
                    HealthClass = gameObject.AddComponent<playerhealth>();
            }
            AudioPlayer = FindObjectOfType<AudioService>();
            if(AudioPlayer == null) AudioPlayer = gameObject.AddComponent<AudioService>();

            popup = FindObjectOfType<PopupPanel>();
            try {
                if (popup == null)
                    popup = Instantiate(Resources.Load<PopupPanel>("UI/Pop-up"), GameObject.Find("UI").transform); //canvas
                popup.ShowHide(false);
            }catch { }
            try
            {
                LoadScreenclass = FindObjectOfType<LoadingPanel>(); 
                if(LoadScreenclass == null) LoadScreenclass = Instantiate(Resources.Load<LoadingPanel>("UI/Loading"), GameObject.Find("UIPanel").transform);//panel
                LoadScreenclass.ShowHide(false);
                
            }catch { } 
        }

    public void ShowDetail(string name, string description, Sprite itemImage = null) {
        popup.ShowDetail(name, description,itemImage);
        popup.ShowHide(true);
    }

    public void ShowError(string detail)
    {
        popup.ShowError(detail);
        popup.ShowHide(true);
    }
    
    //singleton //Singleton.Instance
    private static Singleton _instance;
    public static Singleton Instance{
        get{
            if (_instance == null){
                _instance = FindObjectOfType<Singleton>();
                if (_instance == null){
                    _instance = new GameObject().AddComponent<Singleton>();
                }
            }
            return _instance;
        }
    }

    public bool FirstTime
    {
        get => _FirstTime;
        set => _FirstTime = value;
    }

    public int LoadNumber
    {
        get => _loadNumber;
        set => _loadNumber = value;
    }

    public int Difficulty
    {
        get => difficulty;
        set => difficulty = value;
    }

    public bool ContinuePrompt
    {
        get => continue_prompt;
        set => continue_prompt = value;
    }

    public bool Loggedin
    {
        get => loggedin;
        set => loggedin = value;
    }

    public bool GameOver
    {
        get => gameOver;
        set => gameOver = value;
    }

    public float Time1
    {
        get => time;
        set => time = value;
    }

    public int PlayerID
    {
        get => playerID;
        set => playerID = value;
    }

    public string Username
    {
        get => username;
        set => username = value;
    }

    void Awake(){
        if (_instance != null) Destroy(this);
        DontDestroyOnLoad(this);
            
             try {
        Fade = FindObjectOfType<Fading>();
        if(Fade == null) Fade = gameObject.AddComponent<Fading>();
        Fade.fadeSpeed = fadespeed;
        }catch { } 
    }
}
public class AudioService: MonoBehaviour{
    private AudioSource _music, _sfx;

    public AudioSource Music
    {
        get => _music;
        set => _music = value;
    }

    public AudioSource Sfx
    {
        get => _sfx;
        set => _sfx = value;
    }

    void OnEnable(){
        _music = this.gameObject.AddComponent<AudioSource>();
        _sfx = gameObject.AddComponent<AudioSource>();
    }   
    public void PlayMusic(AudioClip clip){
        _music.Stop();
        _music.loop = true;
        _music.clip = clip;
        _music.Play(0);
    }

    public void PlaySfx(AudioClip clip) {
        _sfx.PlayOneShot(clip);
    }
}
