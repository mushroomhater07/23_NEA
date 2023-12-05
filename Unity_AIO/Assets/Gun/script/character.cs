using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class character : MonoBehaviour
{
    CharacterController controller;
    Camera cam;
    float speed = 20;
    Vector2 lastposition = Vector2.zero;
    // Start is called before the first frame update
    void Start() {
        cam = FindObjectOfType<Camera>();
        controller = GetComponent<CharacterController>();
    }
    void Update() {
        Move();
    }
    private void Move(){
        if(Input.GetKey(KeyCode.W)){
            controller.Move(transform.TransformDirection(Vector3.forward * Time.deltaTime *speed));
        }else if(Input.GetKey(KeyCode.A)){
            controller.Move(transform.TransformDirection(Vector3.left * Time.deltaTime*speed));
        }else if(Input.GetKey(KeyCode.S)){
            controller.Move(transform.TransformDirection(Vector3.back * Time.deltaTime*speed));
        }else if(Input.GetKey(KeyCode.D)){
            controller.Move(transform.TransformDirection( Vector3.right* Time.deltaTime*speed));
        }else if(Input.GetKeyDown(KeyCode.C)){
            controller.Move(transform.TransformDirection(Vector3.up * -0.5f));
        }else if(Input.GetKeyUp(KeyCode.C)){
            controller.Move(transform.TransformDirection(Vector3.up * 0.5f));
        }
    }
}
