using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Serialization;

public class Setting : MonoBehaviour
{    
// Touchcontrol Senscript;
    public bool loggedin = false;
    public Slider xsenD;
    public Slider ysenD;
    public Slider musicD;
    public Slider brightnessD;
    public Slider joystickScale;
    public Slider cameraFOV;
    public Slider graphicQuality;
    public Slider sfXvol;
    GameObject joystick1;    
    GameObject maincam;
    
    void Start()
    {
        // Senscript = GetComponent<Touchcontrol>();
        joystick1 = GameObject.FindGameObjectWithTag("GameController");
        maincam = GameObject.FindGameObjectWithTag("MainCamera");
    }
    public void DefaultValue(){
        xsenD.value = 0.5f;
        ysenD.value = 0.5f;
    //    MusicD.value = ;`1
    //    BrightnessD.value = ;
        joystickScale.value = 0.5f;
        cameraFOV.value = 0f;
        graphicQuality.value = 1f;
        sfXvol.value = 0.5f;
    }

    // Update is called once per frame
    void Update(){
       //Debug.Log(AudioListener.volume);
        //AudioListener.volume = MusicD.value;
        //SceneManager.LoadScene(1);
        //Senscript.XlookSen = XsenD.value* 0.27f + 0.03f;
        //Senscript.YlookSen = YsenD.value* 0.27f + 0.03f;
        Vector3 scale1 = new Vector3(joystickScale.value *1.1f +0.5f, joystickScale.value *1.1f +0.5f, joystickScale.value *1.1f +0.5f);
        //Debug.Log(joystick1);
        joystick1.transform.localScale =  scale1; 
        maincam.GetComponent<Camera>().fieldOfView = cameraFOV.value*40f + 60f;


    }
    
}
