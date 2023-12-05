using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Singleton : MonoBehaviour
{
    public static AudioService AudioService=> new AudioService();
    private AudioSource source;
    void Start(){
        source = FindObjectOfType<AudioSource>();
        if(source == null)
        {source = new GameObject().AddComponent<AudioSource>();}
    }   
    public void PlayAudio(AudioClip clip){
        Debug.Log("played");
        source.PlayOneShot(clip);
    }


    //singleton
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
        if (_instance != null)
        {
            Destroy(this);
        };
        DontDestroyOnLoad(this);
    }
}
public class AudioService: MonoBehaviour{
    private AudioSource source;
    void Start(){
        try{source = FindObjectOfType<AudioSource>();}
        catch{source = new AudioSource();}
    }   
    void PlayAudio(AudioClip clip){
        // source.Stop();
        source.PlayOneShot(clip);
    }
}
