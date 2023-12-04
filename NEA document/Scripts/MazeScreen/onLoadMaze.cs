using System;
using System.Collections;
using System.Collections.Generic;
using MenuScreen;
using UnityEngine;
using UnityEngine.EventSystems;

public class onLoadMaze : MonoBehaviour
{
    void Awake()
    {
        GameObject singleton_ins = Singleton.Instance.gameObject;
         singleton_ins.GetComponent<Singleton>().init();
        try
        {
        singleton_ins.AddComponent<EventSystem>();
        singleton_ins.AddComponent<StandaloneInputModule>();
        }
        catch (Exception e)
        {
            Console.WriteLine(e);
            throw;
        }
    }
}
