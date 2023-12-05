using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class week1 : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Hello world");
        int health = 50;
        double pi = 3.14;
        char r = 'r';
        string name = "snake";
        float f = 134.45E-2f;
        float cost = 2.50f;
        bool canJump = false;
        Debug.Log(f);
        Debug.Log(pi);
        Debug.Log(r);
        Debug.Log(name);
        Debug.Log(health);
        // if(true){    } Else{ }
        if (health > 50) { canJump = true; } else { canJump = false; }
        do { health--; } while (health < 0);
        while(health < 0) { health--; };
        for (int i = 0; i < health; i++) { }
    }
    // Update is called once per frame
}
