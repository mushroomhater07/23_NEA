using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class setting : MonoBehaviour
{
    // Start is called before the first frame update
    public Button VideoButton;
    public Button AudioButton;
    public Button ControlButton;
    public GameObject VideoPanel;
    public GameObject AudioPanel;
    public GameObject ControlPanel;
    public GameObject SettingPanel;

    Touchcontrol Senscript;

    public bool loggedin = false;
    public Slider XsenD;
    public Slider YsenD;
    public Slider MusicD;
    public Slider BrightnessD;
    public Slider JoystickScale;
    public Slider CameraFOV;
    public Slider GraphicQuality;
    public Slider SFXvol;
    GameObject joystick1;    
    GameObject maincam;
    void Start()
    {
        Senscript = GetComponent<Touchcontrol>();
        joystick1 = GameObject.FindGameObjectWithTag("GameController");
        maincam = GameObject.FindGameObjectWithTag("MainCamera");
        VideoButton1();
    }
    public void VideoButton1(){
        VideoButton.interactable = false;
        AudioButton.interactable = true;
        ControlButton.interactable = true;
        VideoPanel.SetActive(true);
        AudioPanel.SetActive(false);
        ControlPanel.SetActive(false);
    }
    public void AudioButton1(){
        AudioButton.interactable = false;
        VideoButton.interactable = true;
        ControlButton.interactable = true;
        AudioPanel.SetActive(true);
        VideoPanel.SetActive(false);
        ControlPanel.SetActive(false);
    }public void ControlButton1(){
        ControlButton.interactable = false;
        VideoButton.interactable = true;
        AudioButton.interactable = true;
        ControlPanel.SetActive(true);
        AudioPanel.SetActive(false);
        VideoPanel.SetActive(false);
    }public void QuitButton(){
    SettingPanel.SetActive(false);
    }public void DefaultValue(){
        XsenD.value = 0.5f;
        YsenD.value = 0.5f;
    //    MusicD.value = ;`1
    //    BrightnessD.value = ;
        JoystickScale.value = 0.5f;
        CameraFOV.value = 0f;
        GraphicQuality.value = 1f;
        SFXvol.value = 0.5f;
    }

    // Update is called once per frame
    void Update(){
       //Debug.Log(AudioListener.volume);
        //AudioListener.volume = MusicD.value;
        //SceneManager.LoadScene(1);
        //Senscript.XlookSen = XsenD.value* 0.27f + 0.03f;
        //Senscript.YlookSen = YsenD.value* 0.27f + 0.03f;
        Vector3 scale1 = new Vector3(JoystickScale.value *1.1f +0.5f, JoystickScale.value *1.1f +0.5f, JoystickScale.value *1.1f +0.5f);
        //Debug.Log(joystick1);
        joystick1.transform.localScale =  scale1; 
        maincam.GetComponent<Camera>().fieldOfView = CameraFOV.value*40f + 60f;


    }
    
}
