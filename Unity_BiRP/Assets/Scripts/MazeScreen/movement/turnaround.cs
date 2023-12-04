using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.EventSystems;

public class turnaround : MonoBehaviour
{ 
    [SerializeField] private Camera _cam;
    [SerializeField] private Joystick dyn_joy;
    [SerializeField] private float _xspeed, _yspeed;

    public Camera cam
    {
        get => _cam;
        set => _cam = value;
    }
    public float xspeed
    {
        get => _xspeed;
        set => _xspeed = value;
    }
    public float yspeed
    {
        get => _yspeed;
        set => _yspeed = value;
    }

    void Start()
    {
        dyn_joy = FindObjectOfType<DynamicJoystick>();
    }
    void Update(){
        float y = dyn_joy.Horizontal;
        float x = -dyn_joy.Vertical;
        transform.Rotate(y * _yspeed * Vector3.up );

        //_cam rotate 
        Vector3 camrotate = _cam.transform.localEulerAngles;
        // Debug.Log(camrotate);
        camrotate.x += x * _xspeed;
        //290-360 and 0 to 20 
        camrotate.x = Mathf.Clamp(camrotate.x, 0f , 12f);
        camrotate.z = 0;
        // if(camrotate.x>-19 && camrotate.x<12){
        _cam.transform.localEulerAngles = camrotate;
        // }       
    }
}
      // original = Quaternion.ToEulerAngles(transform.rotation);
        // originialeuler = transform.localEulerAngles;
        // looking();

        // Touch touch;
        // if (Input.touchCount > 0){
            // for (int i = Input.touches.Length; i > 0; i--)
            // {
                // touch = Input.GetTouch(0);
                // if(touch.position.x > Screen.width/2){
                //     moving.x += touch.deltaPosition.y *-1;
                //     looking.y += touch.deltaPosition.x ;
                //     looking.y = Mathf.Clamp(looking.y, -120f, 120f);
                //     cam.transform.localEulerAngles = new Vector3(moving.x,0,0);
                //     transform.localEulerAngles = new Vector3(0,looking.y,0);
                //    };
            // }
        // }

        //     try{
        //         while(true){touch = Input.GetTouch(on);on++;}
        //     }catch{
        //         // while(touch.position.x < (Screen.width/2)){
        //         //     on--;
        //         //     touch= Input.GetTouch(on);
        //         // }
        //         touch = Input.GetTouch(on-1);
        //         // Debug.Log(touch.deltaPosition.x + " " +touch.deltaPosition.y);
        //         Debug.Log(Vector3.right * (original.x +touch.deltaPosition.x)*-1*YlookSen +""+touch.deltaPosition.x);
        //         transform.Rotate(Vector3.right * (original.x +touch.deltaPosition.x)*-1*YlookSen);
        //         // Debug.Log(Vector3.up * (original.y+ touch.deltaPosition.y)* XlookSen);
        //         cam.transform.localRotation = Quaternion.Euler(Vector3.up *  touch.deltaPosition.y* XlookSen);
        //     }

//     void OnDragDelegate(PointerEventData data){
//         Ray ray = Camera.main.ScreenPointToRay(data.position);
//         Vector3 rayPoint = ray.GetPoint(Vector3.Distance(transform.position, Camera.main.transform.position));
//         transform.position = rayPoint;

   // void OnDrag(PointerEventData eventData)
//     // {
//     //     cam = null;
//     //     if (canvas.renderMode == RenderMode.ScreenSpaceCamera)
//     //         cam = canvas.worldCamera;

//     //     Vector2 position = RectTransformUtility.WorldToScreenPoint(cam, background.position);
//     //     Vector2 radius = background.sizeDelta / 2;
//     //     Debug.Log(radius); Debug.Log(position);
//     //     // input = (eventData.position - position) / (radius * canvas.scaleFactor);
//     //     // FormatInput();
//     //     // HandleInput(input.magnitude, input.normalized, radius, cam);
//     //     // handle.anchoredPosition = input * radius * handleRange;