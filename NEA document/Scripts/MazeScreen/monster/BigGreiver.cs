using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BigGreiver : MonsterBehaviour
{
    public override void Update()
    {
        if (char1 == null)
        {
            try{char1 = FindObjectOfType<movement>().gameObject;}catch{ }
        }
        else
        {
            if(!isDead) Chase(char1.transform.position,2,15,1.53f,35f);
            if(!isRunned) Dead();
        }
    }    
}
