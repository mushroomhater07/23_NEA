using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class pass : MonoBehaviour
{
    // Start is called before the first frame update
    health key;
    Collider collider;
    void Start()
    {
        collider = GetComponent<Collider>();
        collider.isTrigger = true;
    }
    void onTriggerEnter(Collider collider){
        if (key.button==true){
            //AnimationManager
            //Destroy(GameObject object)
        }
    }
    // Update is called once per frame
    void Update()
    {
        
    }
    
}
