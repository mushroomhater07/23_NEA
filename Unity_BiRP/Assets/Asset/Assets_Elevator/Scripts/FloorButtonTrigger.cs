using UnityEngine;
using System.Collections;

public class FloorButtonTrigger : MonoBehaviour
{
    public ElevatorControl elevator;

    public int floorNumber;

    public ParticleSystem psGlow;
    public bool    bEnabled;

	void Start ()
    {
	    DisableLight();
        bEnabled = false;
	}
	
	void Update ()
    {
	
	}

    public void PressButon()
    {
        if ( bEnabled == false )
        {
            elevator.CallElevator( floorNumber );
            bEnabled = true;
            LightUpButton();
        }
    }

    void LightUpButton()
    {
        psGlow.enableEmission = true;
    }

    public void DisableLight()
    {
        psGlow.enableEmission = false;
    }
}
