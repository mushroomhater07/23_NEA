
using System;
using System.IO;
using System.Threading.Tasks;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.UI;

public class Setting : MonoBehaviour

{
    private string dbname,filePath;    
    [SerializeField] private Slider xSenS, ySenS,MusicVolS, sfxVolS,cameraFOVS, minimapSizeS, joystickSizeS,graphicQualityS,brightnessS;
   void Start()
   {
       dbname = "setting.maze";
        // create default value
       filePath = Application.persistentDataPath + "/"+ dbname;
       if (File.Exists(filePath)) LoadSetting();
       else Setup();


       // Senscript = GetComponent<Touchcontrol>();
   }

   public void LoadSetting()
   {
       var result = Task.Run(() => Singleton.Localdb.Query(@"SELECT * FROM 'Setting';", "setting.maze")).Result
           .Split(';');
       // Debug.Log(JsonConvert.SerializeObject(result));
       xSenS.value= float.Parse(result[3]);
       ySenS.value= float.Parse(result[4]);
       MusicVolS.value = float.Parse(result[1]);
       sfxVolS.value	= float.Parse(result[0]);
       graphicQualityS.value = float.Parse(result[6]);
       cameraFOVS.value= float.Parse(result[2]);
       minimapSizeS.value= float.Parse(result[8]);
       joystickSizeS.value= float.Parse(result[5]);
       brightnessS.value= float.Parse(result[7]);

       SaveSetting();
   }
    public void SaveSetting(){
        UpdateSetting(xSenS.value, ySenS.value,MusicVolS.value, sfxVolS.value,cameraFOVS.value, minimapSizeS.value,joystickSizeS.value,brightnessS.value);
        
        // Singleton.Instance.init();
        try{Singleton.AudioPlayer.Music.volume = MusicVolS.value/100f;
        Singleton.AudioPlayer.Sfx.volume = sfxVolS.value/100f;}catch{}
        try{FindObjectOfType<turnaround>().xspeed = xSenS.value/100f* 3f +2f;}catch(Exception e){}

        try { FindObjectOfType<turnaround>().yspeed = ySenS.value / 100f * 3f +2f; }catch(Exception e){}

        try { FindObjectOfType<VariableJoystick>().gameObject.transform.localScale =
                (Vector3.one * 1.6f * joystickSizeS.value / 100); }catch(Exception e){}

        try { FindObjectOfType<minimap>().MinimapCam.orthographicSize = minimapSizeS.value / 100f * 20f + 5f; }catch { }

        try{GameObject.Find("TPP").GetComponent<Camera>().fieldOfView = cameraFOVS.value /100f* 30f + 50f;}catch{ }
        try{GameObject.Find("FPP").GetComponent<Camera>().fieldOfView = cameraFOVS.value /100f* 30f + 50f;}catch{ }
        Screen.brightness = brightnessS.value/100f;
    }//*40f + 60f;
    public void Setup(){
        Task.Run( () => Singleton.Localdb.Query(@"CREATE TABLE if not exists 'Setting' (
                'sfxVol'	        INTEGER, 'MusicVol'	    INTEGER,
                'cameraFOV'	        INTEGER, 'xSen'	        INTEGER,
                'ySen'	            INTEGER, 'joystickSize'	INTEGER,
                'graphicQuality'	INTEGER, 'brightness'	INTEGER,
                'minimapSize'	    INTEGER
            );","setting.maze")).Wait();
            Task.Run( () => Singleton.Localdb.Query("INSERT INTO Setting(xSen) VALUES (0);","setting.maze")).Wait();
            UpdateSetting();
    }

    private static void UpdateSetting(float xSen = 50, float ySen = 50, float MusicVol = 50, float sfxVol = 50, float cameraFOV = 50, float minimapSize = 50, float joystickSize = 50, float brightness = 50, float graphicQuality = 50)
    {
        // System.Threading.Thread.Sleep(1000);
        Task.Run(() => Singleton.Localdb.Query($@"UPDATE Setting 
SET     sfxVol	= {sfxVol},
        MusicVol	= {MusicVol},
        cameraFOV	= {cameraFOV},
        xSen	= {xSen},
        ySen	= {ySen},
        joystickSize	= {joystickSize},
        graphicQuality	= {graphicQuality},
        brightness	= {brightness},
        minimapSize	= {minimapSize};","setting.maze")).Wait();
    }
}

