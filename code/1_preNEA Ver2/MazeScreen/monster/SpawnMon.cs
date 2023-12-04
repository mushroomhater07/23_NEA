// using System.Collections;
// using System.Collections.Generic;
// using UnityEngine;
//
// public class monster1 : MonoBehaviour
// {
//     // Start is called before the first frame update
//     [SerializeField]GameObject monster;
//     void Start()
//     {
//
//     }
//     public int _month;
//      public int Month
//     {
//         get => _month;
//         set
//         {
//             if ((value > 0) && (value < 13))
//             {
//                 _month = value;
//             }
//         }
//     }
//     void Update()
//     {
//         Instantiate(monster);
//     }
//         public GameObject player;
//     public float speed = 0.1f;
//     public bool chase = true;
//     private float chasetime;
//     private CharacterController charcontrol;
//     // Start is called before the first frame update
//     void Start()
//     {
//         charcontrol = GetComponent<CharacterController>();
//         Debug.Log(charcontrol);
//     }
//
//     // Update is called once per frame
//     void Update()
//     {   chasetime+= Time.deltaTime;
//         chasetime %=10;
//         if( chasetime>5)chase = false;else if(chasetime < 5) chase = true;
//         if (chase){
//             Transform playerpos = player.transform;
//             
//             charcontrol.Move(transform.TransformDirection(Vector3.forward* speed) );
//             
//         }
//         if (Physics.CheckSphere(transform.position, 0.5f)){
//            // Debug.Log("found it");
//         }
//     }
// }
//
