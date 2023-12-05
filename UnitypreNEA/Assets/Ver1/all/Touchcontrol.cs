using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Touchcontrol : MonoBehaviour
{
    // Start is called before the first frame update

    private Joystick dyn_joystick;
    private CharacterController man;
    public GameObject object1;
    private Animator animator1;
    public Camera defaultcam;
    public float speed = 0.1f;
    public float XlookSen = 0.3f;
    public float YlookSen = 0.3f;
    public bool isGrounded;
    private int touchindex;
    private Vector3 looking = Vector3.zero;
    private float yacceleration = 0;
    private float Ypos ;
    public float gravityval = -12f;
    public float jumpheight = 2f;
    public bool shouldmove;
    void Start()
    {   animator1 = object1.GetComponent<Animator>();
        man = GetComponent<CharacterController>();
        dyn_joystick = FindObjectOfType<FixedJoystick>();
        isGrounded = man.isGrounded;
    }

    // Update is called once per frame
    void Update()
    {   
        Ypos= transform.position.y;
        //Debug.Log(yacceleration);
        touchmovement();
        touchlooking();
        gravity();
    }
    private void gravity(){// Yposition
    
        //Debug.Log(Ypos);
        if(Ypos < 1.1f) {isGrounded = true ; shouldmove = true;}
        if(yacceleration > -9.8f)
        {man.Move(transform.TransformDirection(Vector3.up * yacceleration * Time.deltaTime) );
        yacceleration += gravityval * Time.deltaTime;
        }

    }

    private void touchlooking(){
        Touch touch;
        if (Input.touchCount > 0){
            try{touch = Input.GetTouch(touchindex);
                if(touch.position.x > (Screen.width/2))
            {
                looking.x += touch.deltaPosition.y *-1;
                looking.y += touch.deltaPosition.x ;
                looking.x = Mathf.Clamp(looking.x, -120f, 120f);
                //Debug.Log("x:"+ looking.x + "y:" + looking.y);
                transform.localRotation = Quaternion.Euler(Vector3.up * looking.y* XlookSen);
                defaultcam.transform.localRotation = Quaternion.Euler(Vector3.right * looking.x*YlookSen);
            }else{touchindex = 1;}}
            catch {}
        //Debug.Log("x:" +touch.deltaPosition.x+"z:"+ touch.deltaPosition.y);
        
        }else{touchindex = 0;}
    }
    private void touchmovement(){
        if(shouldmove){
        Vector3 move = Vector3.zero;
        move.x =  dyn_joystick.Horizontal * speed;
        move.z = dyn_joystick.Vertical * speed;
        //Debug.Log("x:"+Mathf.Abs(move.x)+"z:"+Mathf.Abs(move.z));
        if(Mathf.Abs(move.x) > 0 || Mathf.Abs(move.z) >0){animator1.SetBool("Walk", true);} else animator1.SetBool("Walk", false);
        man.Move(transform.TransformDirection(move));   
        }}  
    public void ChangeCamera(){
        Camera[] tpp = GameObject.FindObjectsOfType<Camera>();

        if(tpp[0].enabled){
            tpp[0].enabled = false;
            tpp[1].enabled = true;
        }else{
            tpp[0].enabled = true;
            tpp[1].enabled = false;
        }
    }

    public void Jump(){
        if(isGrounded == true){
        shouldmove = false;
        isGrounded = false;
        yacceleration = Mathf.Sqrt(jumpheight * -0.3f * gravityval);
        
        man.Move(transform.TransformDirection(Vector3.up * yacceleration) );
        animator1.StopRecording();
        if(!animator1.GetCurrentAnimatorStateInfo(0).IsName("Jump"))animator1.SetTrigger("Jump");
        
    }}

}


    