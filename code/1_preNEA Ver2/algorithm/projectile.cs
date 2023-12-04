using System;
using System.Security.Cryptography;
using Unity.VisualScripting;
using UnityEngine;

namespace algorithm
{
    public class projectile : MonoBehaviour
    {
        private movement gravity = new movement();
        private float yacc;

        private void Start()
        {
           
        }

        private void Update()
        { yacc = gravity.gravity();
        }

        public void OnCollisionEnter(Collision collision)
        {
            Destroy(this,200);
        }

        private void OnTriggerEnter(Collider other)
        {
            
        }
    }
    public class badprojectile : projectile{
        
    }
}