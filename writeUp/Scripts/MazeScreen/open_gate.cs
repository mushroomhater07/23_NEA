using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class open_gate : MonoBehaviour
{
    [SerializeField] private Transform m_left, m_right, back;
    [SerializeField] private bool open;
    [SerializeField] private int Speed;
    [SerializeField] private Vector3 m_vecRight_OpenPos, m_vecRight_ClosePos, m_vecLeft_OpenPos, m_vecLeft_ClosePos;

    public bool Open
    {
        get => open;
        set => open = value;
    }

    private void Update()
    {
        if (open)
        {
            m_right.localPosition = Vector3.Lerp(m_right.localPosition, m_vecRight_OpenPos,
                Time.deltaTime * Speed);
            m_left.localPosition =
                Vector3.Lerp(m_left.localPosition, m_vecLeft_OpenPos, Time.deltaTime * Speed);
            back.gameObject.SetActive(false);
        }
        else
        {
            m_right.localPosition = Vector3.Lerp(m_right.localPosition, m_vecRight_ClosePos,
                Time.deltaTime * Speed);
            m_left.localPosition =
                Vector3.Lerp(m_left.localPosition, m_vecLeft_ClosePos, Time.deltaTime * Speed);
            back.gameObject.SetActive(true);
        }
    }
}


