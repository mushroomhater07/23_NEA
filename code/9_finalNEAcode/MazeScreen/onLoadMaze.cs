using System;
using System.Collections;
using System.Collections.Generic;
using MenuScreen;
using UnityEngine;
using UnityEngine.EventSystems;

public class onLoadMaze : MonoBehaviour
{
    // Start is called before the first frame update
    void Awake()
    {
        
        // Destroy(FindObjectOfType<MainMenuManager>().gameObject,0);
        GameObject singleton_ins = Singleton.Instance.gameObject;
        // Instantiate(Resources.Load<GameObject>("UI/MazeManager"),singleton_ins.transform);
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

    // Update is called once per frame
    void Update()
    {
        
    }
}
