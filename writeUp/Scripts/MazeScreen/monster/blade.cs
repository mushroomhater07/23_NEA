using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class blade : MonoBehaviour
{
    [SerializeField] float rotateSpeed;
    [SerializeField] float Scale;

    // Start is called before the first frame update
    void Start()
    {
        Vector3 or = transform.localScale;
        transform.localScale = new Vector3(or.x,or.y,or.z*Scale);
    }

    void Update()
    {
        transform.Rotate( new Vector3(0,rotateSpeed*Time.deltaTime, 0));
    
    }
    private void OnCollisionEnter(Collision collision)
    {
        Singleton.HealthClass.changeHP(-10);
    }
}
