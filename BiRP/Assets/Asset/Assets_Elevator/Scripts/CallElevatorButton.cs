using UnityEngine;
using System.Collections;

public class CallElevatorButton : MonoBehaviour
{
    public ElevatorControl elevator;

    public int floorNumber;

    public ParticleSystem psGlow;
    public bool    bEnabled;

    public Transform    m_rightDoor;
    public Transform    m_leftDoor;
    public Vector3      m_vecLeftDoor_ClosePos;
    public Vector3      m_vecRightDoor_ClosePos;
    public Vector3      m_vecLeftDoor_OpenPos;
    public Vector3      m_vecRightDoor_OpenPos;

	void Start ()
    {
        bEnabled = false;

        psGlow = GetComponent<ParticleSystem>();
        DisableLight();
        
        
	}
	
	void Update ()
    {
        HandleDoors();

        if ( closeDoorTime <= Time.time )
            openDoor = false;
	}

    public bool openDoor;
    void HandleDoors()
    {
        if ( openDoor )
        {
            m_rightDoor.localPosition = Vector3.Lerp( m_rightDoor.localPosition, m_vecRightDoor_OpenPos, Time.deltaTime * elevator.DoorSpeed );
            m_leftDoor.localPosition = Vector3.Lerp( m_leftDoor.localPosition, m_vecLeftDoor_OpenPos, Time.deltaTime * elevator.DoorSpeed );
        }
        else
        {
            m_rightDoor.localPosition = Vector3.Lerp( m_rightDoor.localPosition, m_vecRightDoor_ClosePos, Time.deltaTime * elevator.DoorSpeed );
            m_leftDoor.localPosition = Vector3.Lerp( m_leftDoor.localPosition, m_vecLeftDoor_ClosePos, Time.deltaTime * elevator.DoorSpeed );
        }
    }

    float closeDoorTime;
    public void OpenDoor( float openDelay )
    {
        openDoor = true;
        closeDoorTime = Time.time + openDelay;
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

    public void LightUpButton()
    {
        psGlow.enableEmission = true;
    }

    public void DisableLight()
    {
        psGlow.enableEmission = false;
    }
}
