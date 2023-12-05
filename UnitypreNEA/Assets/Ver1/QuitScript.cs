using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuitScript : MonoBehaviour
{
    [SerializeField] private AudioClip clip;
    private Quitpanel quit;
    // Start is called before the first frame update
    void Start()
    {
        quit = FindObjectOfType<Quitpanel>();
    }
    public void ShowQuit(bool show){
        quit.Show(show);
        if(show){
            Singleton.Instance.PlayAudio(clip);
        }
    }
    public void appQuit(){
        Application.Quit();
        Debug.Log("Quited");
    }
}
