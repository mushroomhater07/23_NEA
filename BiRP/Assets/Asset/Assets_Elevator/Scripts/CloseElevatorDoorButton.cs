using UnityEngine;
using System.Collections;

public class CloseElevatorDoorButton : MonoBehaviour
{
    public ElevatorControl elevator;

    public ParticleSystem psGlow;
    bool    bEnabled;


	// Use this for initialization
	void Start ()
    {
	    DisableLight();
        bEnabled = false;	
	}
	
	// Update is called once per frame
	void Update ()
    {
	    if ( turnOffLight <= Time.time )
        {
            DisableLight();
            bEnabled = false;
        }
	}

    float turnOffLight;
    public void PressButton()
    {
        if ( bEnabled == false )
        {
            bEnabled = true;
            elevator.CloseDoor();
            LightUpButton();
            turnOffLight = Time.time + 5.0f;
        }
    }

    void LightUpButton()
    {
        psGlow.enableEmission = true;
    }

    void DisableLight()
    {
        psGlow.enableEmission = false;
    }
}
