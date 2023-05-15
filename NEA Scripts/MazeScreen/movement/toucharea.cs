using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class toucharea : MonoBehaviour
{
    // Start is called before the first frame update
    GameObject toucharea1;
    
    void Start()
    {
        toucharea1 = this.gameObject;
        Debug.Log(toucharea1);
    }
    void Update(){
        
    }
    private void Raycast(){
        Touch touch;
        // if(Input.touchCount > 0){
            // touch = Input.GetTouch(touchindex);
            // Debug.DrawRay(Vector3.zero,touch.position);

            // Ray ray = Camera.main.ScreenPointToRay(touch.position);  
            // RaycastHit hit;  
            // if (Physics.Raycast(ray, out hit)) {    
            //     if (hit.transform.name == "Toucharea") {     }  
            // }  
        // }
    }
    private int GetTouch(){
        int lastIndex=0, lastFingerIndex =0;
        for(int i = 0; i < Input.touches.Length; i++) {    
            if(Input.touches[i].phase == TouchPhase.Began)
            {
                lastFingerIndex = Input.touches[i].fingerId;
                // if(Input.touches[i].fingerid == lastFingerIndex)
                // {
                //     lastIndex = i;
            // }
            }
            
       }
        return lastIndex;
    }
    float Vertical {get; set;}
    float Horizontal {get;set;}
}
