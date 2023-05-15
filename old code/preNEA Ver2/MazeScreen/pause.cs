using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class pause : MenuPanels
{
    // Start is called before the first frame update
    public void timeChange(float time)
    {
        Time.timeScale = time;
    }


    // Update is called once per frame
    void Update()
    {
        
    }
}
