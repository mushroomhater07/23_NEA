using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class timer : MonoBehaviour
{
    float timer1 = 6;
    float timerdecimal; 
    public Text textdate;
    public GameObject texxxx;
    public GameObject on00;
    // Start is called before the first frame update
    void Start()
    {
        Instantiate(texxxx , transform);
    }

    // Update is called once per frame
    void Update()
    {
        timer1 += Time.deltaTime;
        timer1 %= 24;
        timerdecimal = (int)((timer1 - (int)timer1)*60);
        textdate.text ="time: "+ (int)timer1+":" +timerdecimal;
    }
}
