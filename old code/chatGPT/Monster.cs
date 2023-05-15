using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Monster : MonoBehaviour
{
    public int health = 100;

    public void TakeDamage(int damage, Collider collider)
    {
        string colliderName = collider.gameObject.name;

        if (colliderName == "Head")
        {
            health -= damage * 2;
        }
        else if (colliderName == "Torso")
        {
            health -= damage;
        }
        else if (colliderName == "Arm")
        {
            health -= damage / 2;
        }
        else if (colliderName == "Leg")ssssss
        {
            health -= damage / 4;
        }

        if (health <= 0)
        {
            Destroy(gameObject);
        }
    }
}
