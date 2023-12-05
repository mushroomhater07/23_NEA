using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class PlayerMovenment : MonoBehaviour
{
    // Start is called before the first frame update
    private CharacterController controller;
    private Rigidbody rb;
    private Vector3 playerVelocity;
    private float speed = 5f;
    
    public bool isGrounded, doubleJump, Jumped;
    public float gravity = -9.8f,jumpheight = 5f;
    void Start()
    {
        controller = GetComponent<CharacterController>();
        rb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        isGrounded = controller.isGrounded;
    }
    public void ProcessMove(Vector2 input) // recieve from InputManager.cs
    { Vector3 moveDirection = Vector3.zero;
    moveDirection.x = input.x;
    moveDirection.z = input.y;
    controller.Move(transform.TransformDirection(moveDirection)*speed*Time.deltaTime);
        // Yposition
        playerVelocity.y += gravity * Time.deltaTime;
        if (isGrounded && playerVelocity.y < 0)
        playerVelocity.y = -4f; 
        Debug.Log(playerVelocity.y);
            
            controller.Move(playerVelocity * Time.deltaTime);
           }
    public void Jump()
    {
        if (isGrounded)
        {
            playerVelocity.y = Mathf.Sqrt(jumpheight * -3.0f * 9.81f);
        }
    }
}
