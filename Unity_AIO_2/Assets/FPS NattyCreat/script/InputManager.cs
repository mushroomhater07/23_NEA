using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class InputManager : MonoBehaviour
{
    // Start is called before the first frame update
    private Playerinput playerInput;
    private Playerinput .OnFootActions onFoot;
    private PlayerMovenment motor;  

    private PlayerLooking look;
    void Awake()
    {
        playerInput = new Playerinput();
        onFoot = playerInput.OnFoot;
        motor = GetComponent<PlayerMovenment>();
        look = GetComponent<PlayerLooking>();
        //this is event syntex , call back Jump() when performed/ started/ canceled
        onFoot.Jump.performed += ctx => motor.Jump();
    }

    // Update is called once per frame

    private void LateUpdate()
    {
        look.ProcessLook(onFoot.Look.ReadValue<Vector2>());
    }
    void FixedUpdate()
    {
        //tell PlayerMovement.cs to move using the value from movement action
        motor.ProcessMove(onFoot.Movement.ReadValue<Vector2>());
    }
    private void OnEnable(){
        onFoot.Enable();
    }
private void OnDisable(){
    onFoot.Disable();
}
}
