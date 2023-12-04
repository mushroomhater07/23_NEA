using System;
using Unity.VisualScripting;
using UnityEngine;

public interface IMonsterConfig {
    public float health { get; set; }
    public Transform location { get; set; }
    public void Look(Vector3 loc);
    public void Chase(Vector3 loc, float MoveSpeed, float MoveDist, float AttackDist ,float LookDist);
    public void Dead();
}

public abstract class MonsterBehaviour : MonoBehaviour, IMonsterConfig
{
    
    public float _health;
    private Transform _location, _monsterloc;
    protected GameObject char1;
    private Animator _animator;
    protected bool isDead = false;
    protected bool isRunned = false;
    private MazeManager _ins;
    
    public float health { get => _health;
        set => _health = value; }
    public Transform location { get => _location;
        set => _location = value; }

    public void Awake()
    {
        _monsterloc = gameObject.transform;
        _health = 100f;
    }
    public void Start()
    {
        _animator = GetComponentInChildren<Animator>();
        _ins = FindObjectOfType<MazeManager>();
        // Debug.Log(char1);
    }

    public virtual void Update()
    {
        if (char1 == null)
        {
            char1 = FindObjectOfType<movement>().gameObject;
        }
        else
        {
            if(!isDead) Chase(char1.transform.position);
            if(!isRunned) Dead();
        }
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
    
    public void Chase(Vector3 loc,float MoveSpeed = 2f, float MoveDist = 10f, float AttackDist = 1.3f,float LookDist = 25f)
    {
        // Vector3 trans = transform.TransformDirection(loc);
        // transform.LookAt(char1.transform.position);
        float dist = Vector3.Distance(transform.position,char1.transform.position);
        if(dist <= LookDist)
        {
            Look(loc);
            _ins.MonsterPrompt(false);
            if(dist >= AttackDist && dist <= MoveDist){
                _ins.MonsterPrompt(true);
                _animator.SetBool("walk", true);
                transform.position += transform.forward * (MoveSpeed * Time.deltaTime);
            }else if (dist <= AttackDist)
            {
                _animator.SetBool("walk", false);
                _animator.SetTrigger("attack");
                Singleton.HealthClass.changeHP(-1);
            }
            else
            {
                _animator.SetBool("walk", false);
            }
        }
    }

    public void OnCollisionEnter(Collision collision)
    {
        // Debug.Log(collision.collider.tag.ToString());
        if (collision.collider.tag == "Player")
        {
            _animator.SetTrigger("attack");
        }
        else if (collision.collider.tag == "Trap")
        {
            GameObject headshot = Instantiate(Resources.Load<GameObject>("Blood_Headshot Variant"), _monsterloc);
            Destroy(headshot, 3f);
            _animator.SetTrigger("hurt");
            _health -= 60f;
        }
        else if (collision.collider.tag == "Axe")
        {
            GameObject headshot = Instantiate(Resources.Load<GameObject>("Blood_Headshot Variant"), _monsterloc);
            Destroy(headshot, 3f);
            _health -= 110f;
        }
        else
        {
// Debug.Log(collision.collider.name);
        }

    }
    public void Dead()
    {
        
        if (_health < 0)
        {
            _animator.SetBool("walk", false);
            _animator.SetTrigger("dead");
            isDead = true;
            isRunned = true;
            FindObjectOfType<MazeManager>().MonsterKilled++;
            FindObjectOfType<MazeManager>().UpdateScore();
            Destroy(gameObject.GetComponentInChildren<SpriteRenderer>().gameObject);
        }
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
