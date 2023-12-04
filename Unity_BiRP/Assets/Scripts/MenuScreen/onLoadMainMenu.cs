using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class onLoadMainMenu : MonoBehaviour
{
    // Start is called before the first frame update
    void Awake()
    {
        GameObject singleton_ins = Singleton.Instance.gameObject;
        // Instantiate(Resources.Load<GameObject>("UI/MenuManager"),singleton_ins.transform);
        Singleton.Instance.init();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
