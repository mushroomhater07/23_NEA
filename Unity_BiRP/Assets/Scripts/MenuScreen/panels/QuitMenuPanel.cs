using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class QuitMenuPanel : MenuPanels
{
    public void appQuit(){
        Application.Quit();
        Debug.Log("Quited");
    }
}
