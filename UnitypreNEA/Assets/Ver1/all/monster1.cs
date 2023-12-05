using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class monster1 : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {

    }
    public int _month;
     public int Month
    {
        get => _month;
        set
        {
            if ((value > 0) && (value < 13))
            {
                _month = value;
            }
        }
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}

abstract class monsterconfig {
    float chasespeed;
    float health;
    Transform location;
    bool chase;
    
}