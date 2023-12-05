using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class startgamebut : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject Start1;
    public startgamebut(){
        Start1 = GetComponent<Button>().gameObject;
    }
        
    // Update is called once per frame
    void Update()
    {
        
    }
}
