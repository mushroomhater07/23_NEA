using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Quitpanel : MonoBehaviour
{
    // Start is called before the first frame update
    private GameObject panel;
    void Start(){
        panel = this.gameObject;
        panel.SetActive(false);
    }
    public void Show(bool show){
        panel.SetActive(show);
    }
}
