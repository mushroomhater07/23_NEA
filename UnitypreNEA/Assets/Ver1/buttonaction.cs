using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
// using System;
using UnityEngine.EventSystems;
using TMPro;
public class buttonaction : MonoBehaviour
{
    private Button[] buttons;
    [Header("Audio")]
    public List<AudioClip> AudioClips;
    
    // private Image image1;
    // private EventSystem evsys;
    // // Start is called before the first frame update
    void Start()
    {
    //     evsys = FindObjectOfType<EventSystem>();
        buttons = this.GetComponentsInChildren<Button>();
        foreach (Button button in buttons){
            button.onClick.AddListener(PlaySound);
        }
    //     games = new GameObject[buttons.GetLength(0)];
    //     for (int count = 0; count < buttons.GetLength(0); count++)
    //     {   
    //         Debug.Log(buttons[count].gameObject);
    //         buttons[count].onClick.AddListener(buttonAnimation);
    //         games[count] = buttons[count].gameObject;
    //     }
    }
    public void PlaySound(){
        
        int num = Random.Range(0,AudioClips.Count);Debug.Log("num");
        Singleton.Instance.PlayAudio(AudioClips[num]);
    }

//     public void buttonAnimation(Image img){
//         StopAllCoroutines();
//         img.enabled = true;
//         StartCoroutine(reset(img, null));
//     }
//     public void buttonText(TMP_Text txt){
//         StopAllCoroutines();
//         txt.color = Color.black;
//         StartCoroutine(reset(null,txt));
//     }
//     // Update is called once per frame
//     IEnumerator reset(Image img = null, TMP_Text txt = null)
//     {
//         yield return new WaitForSeconds(1);
//         try{img.enabled = false;
//         txt.color = Color.white;
//         }
//         catch{}
//     }
// }
}