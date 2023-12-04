using UnityEngine;

public interface IMonsterConfig {
    public float chasespeed { get; }
    public float health { get; set; }
    public Transform location { get; set; }
    public bool attack { get; set; }
    public void Look(Vector3 loc);
    public void Chase(Vector3 loc);
    public void Dead();
}

public abstract class MonsterBehaviour : MonoBehaviour, IMonsterConfig
{
    private float _chasespeed = 1, _health;
    private bool _attack, _chase;
    private Transform _location;
    private CharacterController char1;
    public float chasespeed { get => _chasespeed; }
    public float health { get => _health;
        set => _health = value;
    }
    public bool attack { get => _attack;
        set => _attack = value;
    }
    public Transform location { get => _location;
        set => _location = value;
    }

    public void Start()
    {
        char1 = GetComponentInChildren<CharacterController>();
        Debug.Log(char1);
    }
    public void Look(Vector3 loc)
    {
        float deltax = transform.position.x - loc.x;
        float deltay = transform.position.z - loc.z;
        float x = Mathf.Rad2Deg* (Mathf.Atan(deltay/deltax));
        Vector3 test;
        if (deltax < 0 && deltay > 0) test = new Vector3(0, -(270+x), 0);
        else if (deltax <0 &&deltay <0) test = new Vector3(0, 90-x, 0);
        else if (deltax > 0 && deltay < 0) test = new Vector3(0, -90-x, 0);
        else test = new Vector3(0, -90-x, 0);
        transform.localEulerAngles = test;
    }
    public void Chase(Vector3 loc)
    {
        Vector3 trans = transform.TransformDirection(loc);
        transform.position = new Vector3(transform.position.x+trans.x, 0 ,transform.position.z+ trans.z) ;
    }

    public void Dead()
    {
        
    }
}
//     float x = Mathf.Rad2Deg* (Mathf.Atan(deltax/deltay));
//     Vector3 test;
//         if (deltax < 0 && deltay > 0)
//         test = new Vector3(0, -(180 - x), 0);Debug.Log("s");
// else if (deltax <0 &&deltay <0)
//     test = new Vector3(0, x, 0);Debug.Log("t");
// else if (deltax > 0 && deltay < 0)
//     test = new Vector3(0, x, 0);Debug.Log("c");
// else
//     test = new Vector3(0, -(180 - x), 0);Debug.Log("a");
