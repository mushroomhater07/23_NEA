using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootingAi : MonoBehaviour
{
    // Start is called before the first frame update
    public float health;
    // Update is called once per frame
    void Update()
    {
        if (health < 0){
            Destroy(gameObject);
        }
    }
    public void TakeDamage(int damage){
        health -= damage;
    }
}
