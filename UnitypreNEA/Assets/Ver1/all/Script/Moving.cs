using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class Moving : MonoBehaviour
{
    // Start is called before the first frame update
    public float speed = 5.0f;
    Control inputscript;
    Control .BasicWalkingActions onFoot;
    CharacterController chartor;
    private void OnEnable(){
    onFoot.Enable();
}
    void Start()
    {
        Application.OpenURL("http://unity3d.com/");
        inputscript = new Control();
        onFoot = inputscript.BasicWalking;
        chartor = GetComponent<CharacterController>();
    }
    void Movement(Vector2 input){
        Vector3 move = Vector3.zero;
        move.x = input.x;
        move.z = input.y;
        Debug.Log("x" + input.x +"z" +input.y);
        Debug.Log("x" + move.x +"z" +move.z);
        chartor.Move(transform.TransformDirection(move) *speed * Time.deltaTime);

    }
    // Update is called once per frame
    void Update()
    {
        Movement(onFoot.Walk.ReadValue<Vector2>());
    }
}
