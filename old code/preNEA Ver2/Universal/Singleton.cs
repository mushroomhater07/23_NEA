using UnityEngine;
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
        void Start()
    {
        HealthClass = FindObjectOfType<playerhealth>();
        if(HealthClass == null) HealthClass = new playerhealth(100, 1);
        AudioPlayer = FindObjectOfType<AudioService>();
        if(AudioPlayer == null) AudioPlayer = new AudioService();

        popup = FindObjectOfType<PopupPanel>();
        try {
            if (popup == null)
                popup = Instantiate(Resources.Load<PopupPanel>("UI/Pop-up"), GameObject.Find("UI").transform); //canvas
            popup.ShowHide(false);
        }catch { }
        try {
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
    void Start(){
        _music = new GameObject().AddComponent<AudioSource>();
        _sfx = new AudioSource();
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
