using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class passwordPanel : MonoBehaviour
{
    [SerializeField]private TMP_InputField inputext;
    private string password;
    private bool done = false;
    private void Start()
    {
        password = FindObjectOfType<MazeManager>().Password;
        
    }
    private void Update()
    {
        // Debug.Log(password);
        if (inputext.text == password)
        {
            FindObjectOfType<exitTrigger>().DestroyWall();
        } 
    }
}
