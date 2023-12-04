using UnityEngine;
using System.Collections;

public class PlayerElevator : MonoBehaviour
{
    Transform m_camTransform;
    public AudioSource m_asButtonPress;

	void Start ()
    {
        Cursor.visible = false;
       
        m_camTransform = Camera.main.transform;
	}
	
	void Update ()
    {
        if ( Input.GetMouseButtonDown(0) )
        {
            Ray ray = new Ray( m_camTransform.position, m_camTransform.forward);
            RaycastHit hit;
            if ( Physics.Raycast ( ray, out hit, 40 ) )
            {
                FloorButtonTrigger button = hit.transform.GetComponent<FloorButtonTrigger>();
                CallElevatorButton button2 = hit.transform.GetComponent<CallElevatorButton>();
                OpenElevatorDoorButton button3 = hit.transform.GetComponent<OpenElevatorDoorButton>();
                CloseElevatorDoorButton button4 = hit.transform.GetComponent<CloseElevatorDoorButton>();

                if ( button != null )
                   button.PressButon();

                if ( button2 != null )                
                    button2.PressButon();

                if ( button3 != null )
                    button3.PressButton();

                if ( button4 != null )
                    button4.PressButton();

                m_asButtonPress.Play();
            }                       
        }
	}
}
