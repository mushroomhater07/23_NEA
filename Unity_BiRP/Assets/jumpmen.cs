using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class jumpmen : MonoBehaviour
{
    public void JumpMen()
    {
        gameObject.GetComponent<Animator>().SetTrigger("jump");
    }
}
