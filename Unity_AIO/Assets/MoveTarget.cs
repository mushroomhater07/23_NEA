using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveTarget : MonoBehaviour
{
    // Start is called before the first frame update
    public LayerMask layer;

    // Update is called once per frame
    void Update()
    {
        if(Input.GetMouseButtonDown(0)){
            Vector3 pos = Input.mousePosition;
            Ray ray = Camera.main.ScreenPointToRay(pos);
            RaycastHit hit;
            if(Physics.Raycast(ray, out hit, Mathf.Infinity, layer)){
                this.transform.position = hit.point;
            }
        }       
    }
}
