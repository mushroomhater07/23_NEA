using System;
using UnityEngine;

    public class gravity : MonoBehaviour
    {
        
        //gravity
        [SerializeField] protected bool _grounded = false;
        [SerializeField] protected float gravityacceleration;
        [SerializeField] private float _jumpgravity;
        [SerializeField] private float _gravityspeed;

        protected Vector3 original;
        [SerializeField] protected bool _isUpJumping;
        public bool isGrounded {
            get => _grounded;
            set => _grounded = value;
        }
        public float gravityspeed {
            get => _gravityspeed;
            set => _gravityspeed = value;
        }

        public void Update()
        {
            original = this.transform.position;
        }

        public float jumpgravity {
            get => _jumpgravity;
            set => _jumpgravity = value;
        }
        public float gravitySetting(){
            if(original.y < 0.03f && gravityacceleration<=0) {
                _grounded = true;
                gravityacceleration = 0;
            }else{
                _grounded = false;
                if(gravityacceleration < 0){
                    _isUpJumping = false; 
                    gravityacceleration -= _gravityspeed*Time.deltaTime;
                }else{
                    gravityacceleration -= _jumpgravity*Time.deltaTime;
                }   
            }return gravityacceleration*Time.deltaTime;
        }
    }
