using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerSetup : MonoBehaviour
{
    float timer1;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        timer1 += Time.deltaTime;
        timer1 %= 10;
        if(timer1 >5) {
            Vector3 scale1 = new Vector3(5,5,5);
            transform.localScale = scale1;} 
        else {
            Vector3 scale1 = new Vector3(1,1,1);
            transform.localScale = scale1;}
    }
}
interface PlayerAction{
    void PlayerMove(){}
    void PlayerLook(){}
}
class playerset :PlayerAction{
    public void PlayerMove(){

    }
}
    
    