using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class onLoadMainMenu : MonoBehaviour
{
    void Awake()
    {
        GameObject singleton_ins = Singleton.Instance.gameObject;
         Singleton.Instance.init();
    }
    void Update()
    {
        
    }
}
