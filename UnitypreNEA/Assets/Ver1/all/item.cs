
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class item : MonoBehaviour
{
    // Start is called before the first frame update

    public GameObject hi;
    void Start()
    {
       // Instantiate("floating ent9ity");
        Collider hi ;
        hi = GetComponent<Collider>();
        hi.isTrigger = true;
        Rigidbody body ;
    }
    

    // Update is called once per frame
    void Update()
    {
        
    }
}
