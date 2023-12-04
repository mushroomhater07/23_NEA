using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class switchcam : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private Camera[] _cams;
    
        public void ChangeCamera(){
        turnaround turnScript = GameObject.FindObjectOfType<turnaround>();
        if(_cams[0].enabled){
            _cams[0].enabled = false;
            _cams[1].enabled = true;
        }else{
            _cams[0].enabled = true;
            _cams[1].enabled = false;
        }
        turnScript.cam = cams[0];
    }

        public Camera[] cams
        {
            get => _cams;
            set => _cams = value;
        }
}
