using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class movement : MonoBehaviour
{
    [SerializeField] private Joystick joystick;
    [SerializeField] private Vector2 move;
    [SerializeField] private float _walkspeed;
    [SerializeField] private Vector3 original;

    //charactercontroller
    // CharacterController char1;

    //gravity
    [SerializeField] private bool _grounded = false;
    [SerializeField] private float _gravityspeed;
    [SerializeField] private float gravityacceleration;
    [SerializeField] private float _jumpgravity;

    //crouch
    [SerializeField] private bool _isCrouching;
    [SerializeField] private float _crouchwalk;
    [SerializeField] private float _crouchheight;
    
    //jumping
    [SerializeField] private bool _isUpJumping;
    [SerializeField] private float _jumpheight;
    
    public float walkspeed {
        get => _walkspeed;
        set => _walkspeed = value;
    }
    public bool isGrounded {
        get => _grounded;
        set => _grounded = value;
    }
    public float gravityspeed {
        get => _gravityspeed;
        set => _gravityspeed = value;
    }
    public float jumpgravity {
        get => _jumpgravity;
        set => _jumpgravity = value;
    }
    public bool isCrouching {
        get => _isCrouching;
        set => _isCrouching = value;
    }
    public float crouchwalk {
        get => _crouchwalk;
        set => _crouchwalk = value;
    }
    public float crouchheight {
        get => _crouchheight;
        set => _crouchheight = value;
    }
    public bool isUpJumping {
        get => _isUpJumping;
        set => _isUpJumping = value;
    }
    public float jumpheight {
        get => _jumpheight;
        set => _jumpheight = value;
    }
    
    void Start(){
        joystick = FindObjectOfType<VariableJoystick>();
        // char1 = GetComponent<CharacterController>();
    }
    void Update() {
        original = transform.position;
        touchmovement();
    }
    private void touchmovement(){
        float yacc = gravity();
        if(!_isUpJumping){
            float updatespeed;
            if(_isCrouching||!_grounded) updatespeed = _walkspeed * _crouchwalk;else updatespeed = _walkspeed;
            move = new Vector2(joystick.Horizontal * updatespeed,joystick.Vertical * updatespeed);    
            }else move = Vector2.zero;
        // char1.Move(transform.TransformDirection(new Vector3(move.x, 0 , move.y)));
        Vector3 trans = transform.TransformDirection(new Vector3(move.x, 0 , move.y));
        transform.position = new Vector3(trans.x+ original.x, original.y+ yacc, trans.z+ original.z);
        // transform.position = Vector3.up * (original.y+yacc);
        // transform.position = new Vector3(original.x+move.x, original.y+yacc, original.z + move.y);
    }
    public void crouch(){
        if(_grounded){
            if(_isCrouching) {
                _isCrouching = false;
                transform.position = new Vector3(original.x, original.y + _crouchheight, original.z);
            } else {
                _isCrouching = true;
                transform.position = new Vector3(original.x, original.y - _crouchheight, original.z);
            }  
        }
    }
    public float gravity(){
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
    public void Jumpbutton(){
        if(_grounded){
            _isUpJumping = true;
            gravityacceleration = _jumpheight;
        }
    }
}