using UnityEngine;
using System.Collections;

public class ElevatorSoundController : MonoBehaviour
{

    public AudioSource  m_asMovement;
    public AudioSource  m_asDoorOpen;
    public AudioSource  m_asDoorClose;
    public AudioSource  m_asFloorDing;

    public void PlayMovement()
    {
        if ( m_asMovement.isPlaying == false )
            m_asMovement.Play();
    }

    public void StopMovement()
    {
        if ( m_asMovement.isPlaying )
            m_asMovement.Stop();
    }

    public void FloorDing()
    {
        m_asFloorDing.Play();
    }

    public void OpenDoor()
    {
        m_asDoorClose.Stop();
        m_asDoorOpen.Play();
    }

    public void CloseDoor()
    {
        m_asDoorOpen.Stop();
        m_asDoorClose.Play();
    }
}
