using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class movement : gravity
{
    [SerializeField] private Joystick joystick;
    [SerializeField] private Vector2 move;
    [SerializeField] private float _walkspeed;

    //charactercontroller
    public Animator _animator;

    //crouch
    [SerializeField] private bool _isCrouching;
    [SerializeField] private float _crouchwalk;
    [SerializeField] private float _crouchheight;
    
    //jumping
    [SerializeField] private float _jumpheight;
    
    public float walkspeed {
        get => _walkspeed;
        set => _walkspeed = value;
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
        
    }
     void Update() {
        base.Update();
        touchmovement();
    }
    private void touchmovement(){
        float yacc = gravitySetting();
        if(!_isUpJumping){
            float updatespeed;
            if(_isCrouching||!_grounded) updatespeed = _walkspeed * _crouchwalk;else updatespeed = _walkspeed;
            move = new Vector2(joystick.Horizontal * updatespeed,joystick.Vertical * updatespeed);    
            }else move = Vector2.zero;
        if(Mathf.Abs(move.x)==0 && Mathf.Abs(move.y)==0 )_animator.SetBool("run",false);
        else _animator.SetBool("run",true);
        // char1.Move(transform.TransformDirection(new Vector3(move.x, 0 , move.y)));
        Vector3 trans = transform.TransformDirection(new Vector3(move.x, 0 , move.y));
        transform.position = new Vector3(trans.x+ original.x, original.y+ yacc, trans.z+ original.z);
        // transform.position = Vector3.up * (original.y+yacc);
        // transform.position = new Vector3(original.x+move.x, original.y+yacc, original.z + move.y);
    }
    public void crouch()
    {
        CapsuleCollider collider = this.gameObject.GetComponent<CapsuleCollider>();
        // Debug.Log(this);
        if(_grounded){
            if(_isCrouching) {
                _animator.SetBool("sit",false);
                _isCrouching = false;
                transform.position = new Vector3(original.x, original.y + _crouchheight, original.z);
                
                collider.center = new Vector3(0, 0.91f, 0);
                collider.height = 1.82f;
            } else {
                _animator.SetBool("sit", true);
                _isCrouching = true;
                transform.position = new Vector3(original.x, original.y - _crouchheight, original.z);
                collider.center = new Vector3(0, 1.26f, 0);
                                collider.height = 1.37f;
            }  
        }
    }

    public void Jumpbutton(){
        if(_grounded){
            _animator.SetTrigger("jump");
            _isUpJumping = true;
            gravityacceleration = _jumpheight;
        }
    }
}