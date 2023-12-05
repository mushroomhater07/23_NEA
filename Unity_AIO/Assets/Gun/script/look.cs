using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class look : MonoBehaviour
{
    Vector3 lastposition = Vector3.zero;
    private Camera cam;
    // Start is called before the first frame update
    void Start()
    {
        cam = GetComponent<Camera>();
    }

    // Update is called once per frame
    void Update()
    {
        Looking();
    }
    private void Looking(){

        cam.gameObject.transform.Rotate(new Vector3( Input.mousePosition.y - lastposition.y, lastposition.x-Input.mousePosition.x, 0));
        lastposition = Input.mousePosition;
        
    }
}
