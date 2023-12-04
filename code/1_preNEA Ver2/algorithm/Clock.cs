// using System.Collections;
// using System.Collections.Generic;
// using UnityEngine;
//
// public class Clock12{
//     private Light light1;
//     Vector3 rotate = Vector3.zero;
//     public float time1;
//
//     
//     void Start()
//     {
//         light1 = GetComponent<Light>();
//     }
//
//     // Update is called once per frame
//     void Update()
//     {   
//         
//         time1 += Time.deltaTime; //add 1 every second
//         time1 %= 24;          //clamp between 0 to 24
//         rotate.x = time1 * 360f /24f; //times rotation
//         //Debug.Log("time" + time1 + "rotate: " + rotate.x);
//         light1.transform.rotation = Quaternion.Euler(rotate);
//     }
// }