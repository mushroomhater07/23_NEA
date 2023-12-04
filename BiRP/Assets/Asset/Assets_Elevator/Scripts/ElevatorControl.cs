using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ElevatorControl : MonoBehaviour
{
    enum ELEVATOR_STATE
    {
        STOPPED,
        HEADING_TO_FLOOR,
        WAITING_AT_FLOOR
    }

    public ElevatorSoundController m_elevatorSounds;
    public Vector2[] m_vecLEDDisplayFloors;
    public Material LEDDisplay;
    public Transform m_elevatorTransform;
    public int currentFloor;
    public List<int> targetFloors;

    public float[] FloorHeights;
    public CallButtonsPaired[] callButtonsPaired;
    public FloorButtonTrigger[] floorButtons;
    float waitAtFloorUntil;
    public bool m_bOpenHatch;

    public Transform m_rightDoor;
    public Transform m_leftDoor;
    public Vector3 m_vecLeftDoor_ClosePos;
    public Vector3 m_vecRightDoor_ClosePos;
    public Vector3 m_vecLeftDoor_OpenPos;
    public Vector3 m_vecRightDoor_OpenPos;

    public GameObject[] m_ceilingTiles;
    public Transform m_escapeHatch;

    ELEVATOR_STATE currentState;
    public float moveSpeed = 1.0f; // speed at which the elevator will move
    public float waitAtFloorTime = 10.0f;

    public Transform[] m_elevatorPulleys;
    public Transform m_weightPulley;

    // this is the location of the counter-weight (it moves in accordance with the elevator)
    public float m_weightMaxHeight;
    public float m_weightMinHeight;
    public Transform m_tranCounterWeights;

    float
        DoorGracePeriod = 3.0f; // the time we should wait for the doors to open/close before we move the elevator again

    public float DoorSpeed = 3.0f;
    public bool openDoor;

    // Use this for initialization
    void Start()
    {
        currentState = ELEVATOR_STATE.STOPPED;
        waitAtFloorUntil = -1.0f;
    }

    // Update is called once per frame
    void Update()
    {
        switch (currentState)
        {
            case ELEVATOR_STATE.STOPPED:
                StateStopped();
                break;
            case ELEVATOR_STATE.HEADING_TO_FLOOR:
                StateHeadingToFloor();
                break;
            case ELEVATOR_STATE.WAITING_AT_FLOOR:
                StateWaitAtFloor();
                break;
        }

        HandleDoors();
        DisplayCurrentFloor();

        if (m_bOpenHatch)
            OpenHatch();
        // else
        // CloseHatch();
    }

    void StateStopped()
    {
        if (waitAtFloorUntil <= Time.time + 3.0f)
            SetDoorState(false);

        if (targetFloors.Count > 0)
        {
            if (waitAtFloorUntil <= Time.time)
                currentState = ELEVATOR_STATE.HEADING_TO_FLOOR;
        }
    }



    void StateHeadingToFloor()
    {
        int goalFloor = targetFloors[0];

        float floorHeightTarget = FloorHeights[goalFloor - 1];
        float tolerance = 0.05f;
        float heightDifference = Mathf.Abs(m_elevatorTransform.localPosition.y - floorHeightTarget);

        m_elevatorSounds.PlayMovement();
        MoveCounterWeights();
        AnimatePulleys();

        if (m_elevatorTransform.localPosition.y > floorHeightTarget + tolerance)
        {
            if (heightDifference < 1.0f)
            {
                Vector3 goalVector = new Vector3(m_elevatorTransform.localPosition.x, floorHeightTarget,
                    m_elevatorTransform.localPosition.z);
                m_elevatorTransform.localPosition =
                    Vector3.Lerp(m_elevatorTransform.localPosition, goalVector, Time.deltaTime * 3.0f);
            }
            else
                m_elevatorTransform.localPosition = new Vector3(m_elevatorTransform.localPosition.x,
                    m_elevatorTransform.localPosition.y - Time.deltaTime * moveSpeed,
                    m_elevatorTransform.localPosition.z);
        }
        else if (m_elevatorTransform.localPosition.y < floorHeightTarget - tolerance)
        {
            if (heightDifference < 1.0f)
            {
                Vector3 goalVector = new Vector3(m_elevatorTransform.localPosition.x, floorHeightTarget,
                    m_elevatorTransform.localPosition.z);
                m_elevatorTransform.localPosition =
                    Vector3.Lerp(m_elevatorTransform.localPosition, goalVector, Time.deltaTime * 3.0f);
            }
            else
                m_elevatorTransform.localPosition = new Vector3(m_elevatorTransform.localPosition.x,
                    m_elevatorTransform.localPosition.y + Time.deltaTime * moveSpeed,
                    m_elevatorTransform.localPosition.z);
        }
        else
        {
            // we reached our goal
            currentState = ELEVATOR_STATE.WAITING_AT_FLOOR;
            waitAtFloorUntil = Time.time + waitAtFloorTime;

            // remove the goal from our targetFloors list
            targetFloors.RemoveAt(0);

            //disable the buttons for this floor
            callButtonsPaired[goalFloor - 1].callButtons[0].bEnabled = false;
            callButtonsPaired[goalFloor - 1].callButtons[1].bEnabled = false;
            callButtonsPaired[goalFloor - 1].callButtons[0].DisableLight();
            callButtonsPaired[goalFloor - 1].callButtons[1].DisableLight();
            floorButtons[goalFloor - 1].DisableLight();
            floorButtons[goalFloor - 1].bEnabled = false;
            currentFloor = goalFloor;
            SetDoorState(true);

            callButtonsPaired[goalFloor - 1].callButtons[0].OpenDoor(waitAtFloorTime - DoorGracePeriod);
            m_elevatorSounds.StopMovement();
            m_elevatorSounds.FloorDing();
        }
    }

    public float pulleySpeed;

    void AnimatePulleys()
    {
        foreach (Transform elevatorPulley in m_elevatorPulleys)
        {
            Vector3 targetRotation = elevatorPulley.localEulerAngles;
            targetRotation.z += Time.deltaTime * moveSpeed * pulleySpeed;

            elevatorPulley.localEulerAngles = targetRotation;
        }

        Vector3 targetRotation2 = m_weightPulley.localEulerAngles;
        targetRotation2.y += Time.deltaTime * moveSpeed * pulleySpeed;

        if (targetRotation2.y >= 360)
            targetRotation2.y -= 360;
        else if (targetRotation2.y <= 0)
            targetRotation2.y += 360;

        m_weightPulley.localEulerAngles = targetRotation2;
    }

    //set the position of the counterweights based on the current position of the elevator
    void MoveCounterWeights()
    {
        float flElevatorHeightMax = FloorHeights[FloorHeights.Length - 1];
        float flElevatorHeightMin = FloorHeights[0];

        float flCurrentElevatorHeightSubtractBaseFloorHeight =
            Mathf.Abs(m_elevatorTransform.localPosition.y - flElevatorHeightMin);
        float flCurrentElevatorHeightAsRatio = flCurrentElevatorHeightSubtractBaseFloorHeight /
                                               (flElevatorHeightMax - flElevatorHeightMin);

        float totalWeightTravelDistance = m_weightMaxHeight - m_weightMinHeight;

        float targetWeightHeight = m_weightMaxHeight - (flCurrentElevatorHeightAsRatio * totalWeightTravelDistance);

        Vector3 targetWeightPosition = new Vector3(m_tranCounterWeights.localPosition.x, targetWeightHeight,
            m_tranCounterWeights.localPosition.z);
        m_tranCounterWeights.localPosition = Vector3.Lerp(m_tranCounterWeights.localPosition, targetWeightPosition,
            Time.deltaTime * 4.0f);
    }

    void DisplayCurrentFloor()
    {
        if (currentState == ELEVATOR_STATE.WAITING_AT_FLOOR)
        {
//            Debug.Log ( "Waiting at Floor" + Time.time );
            SetFloorMaterial(currentFloor - 1);
        }
        else
        {
//            Debug.Log ( "MOVING" + Time.time );
            for (int i = 0; i < FloorHeights.Length; i++)
            {
                float floorHeight = FloorHeights[i];

                if (i == 0)
                {
                    if (m_elevatorTransform.localPosition.y <= floorHeight + 0.25f)
                    {
                        SetFloorMaterial(i);
                        return;
                    }
                }
                else if (i == FloorHeights.Length - 1)
                {
                    if (m_elevatorTransform.localPosition.y >= floorHeight - 0.25f)
                    {
                        SetFloorMaterial(i);
                        return;
                    }
                }
                else
                {
                    float floorHeightMax = FloorHeights[i + 1];
                    float floorHeightMin = FloorHeights[i - 1];

                    if (m_elevatorTransform.localPosition.y >= floorHeightMin &&
                        m_elevatorTransform.localPosition.y <= floorHeightMax)
                    {
                        SetFloorMaterial(i);
                        return;
                    }
                }
            }
        }
    }

    void SetFloorMaterial(int iFloor)
    {
        LEDDisplay.SetTextureOffset("_MainTex", m_vecLEDDisplayFloors[iFloor]);
        LEDDisplay.SetTextureOffset("_EmissionMap", m_vecLEDDisplayFloors[iFloor]);
    }

    void HandleDoors()
    {
        if (openDoor)
        {
            m_rightDoor.localPosition = Vector3.Lerp(m_rightDoor.localPosition, m_vecRightDoor_OpenPos,
                Time.deltaTime * DoorSpeed);
            m_leftDoor.localPosition =
                Vector3.Lerp(m_leftDoor.localPosition, m_vecLeftDoor_OpenPos, Time.deltaTime * DoorSpeed);
        }
        else
        {
            m_rightDoor.localPosition = Vector3.Lerp(m_rightDoor.localPosition, m_vecRightDoor_ClosePos,
                Time.deltaTime * DoorSpeed);
            m_leftDoor.localPosition =
                Vector3.Lerp(m_leftDoor.localPosition, m_vecLeftDoor_ClosePos, Time.deltaTime * DoorSpeed);
        }
    }

    void StateWaitAtFloor()
    {
        if (waitAtFloorUntil <= Time.time + 3.0f)
            SetDoorState(false);

        if (targetFloors.Count > 0)
        {
            if (waitAtFloorUntil <= Time.time)
                currentState = ELEVATOR_STATE.HEADING_TO_FLOOR;
        }
    }

    public void OpenDoor()
    {
        if (currentState == ELEVATOR_STATE.WAITING_AT_FLOOR)
        {
            waitAtFloorUntil = Time.time + 8.0f;
            SetDoorState(true);

            // open the doors on the platform
            callButtonsPaired[currentFloor - 1].callButtons[0].OpenDoor(5.0f);
        }
    }

    public void CloseDoor()
    {
        if (currentState == ELEVATOR_STATE.WAITING_AT_FLOOR)
        {
            waitAtFloorUntil = Time.time + DoorGracePeriod;
            SetDoorState(false);
        }
    }

    bool previousDoorOpen = false;

    void SetDoorState(bool newDoorOpen)
    {
        if (newDoorOpen)
        {
            if (previousDoorOpen == false)
                m_elevatorSounds.OpenDoor();
        }
        else
        {
            if (previousDoorOpen == true)
                m_elevatorSounds.CloseDoor();
        }

        previousDoorOpen = newDoorOpen;
        openDoor = newDoorOpen;
    }

    private int findFloor;

    public void CallElevator(int iFloor)
    {
        findFloor = iFloor;
        if (targetFloors.Contains(iFloor) == false)
        {
            targetFloors.Add(iFloor);
        }
    }


    void OpenHatch()
    {
        Vector3 vecHatchRotation = m_escapeHatch.localEulerAngles;
        vecHatchRotation.z = -100;

        m_escapeHatch.localEulerAngles = vecHatchRotation;

        foreach (GameObject ceilingPiece in m_ceilingTiles)
            Destroy(ceilingPiece);
    }

//     void CloseHatch()
//     {
//         Vector3 vecHatchRotation = m_escapeHatch.localEulerAngles;
//         vecHatchRotation.z = 0;
//
//         m_escapeHatch.localEulerAngles = vecHatchRotation;
//
//         foreach ( GameObject ceilingPiece in m_ceilingTiles )
//             ceilingPiece.SetActive( true );
//     }
}

[System.Serializable]
public class CallButtonsPaired
{
    public CallElevatorButton[] callButtons;
}