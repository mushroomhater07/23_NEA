using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class goto12 : MonoBehaviour
{
    
    bool shouldmove;
    Vector2 pos;
    float speed;
    GameObject hello;

    public goto12(Vector2 _pos, float _speed, GameObject _hello){
        hello = _hello;
        pos = _pos;
        speed = _speed;
        Debug.Log("setup complete");
    }
    void Update(){
        Move();
    }

    void Move(){
        Transform hell = hello.transform;
        Vector3 gotopos = new Vector3(pos.x, 0, pos.y);
        if(hell.position == gotopos){
            Destroy(this);
        }
        Debug.Log("moving");
        // if(shouldmove){
            hell.LookAt(hello.transform, gotopos);
            Vector3 trans = hell.TransformDirection(gotopos);
            hell.position = new Vector3(hell.position.x + trans.x, hell.position.y, hell.position.z + trans.z);
        // }
    }
}
