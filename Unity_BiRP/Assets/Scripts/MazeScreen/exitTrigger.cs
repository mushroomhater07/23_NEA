using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class exitTrigger : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] private GameObject exit,passwordPanel;

    private void OnTriggerEnter(Collider col)
    {
        passwordPanel =  GameObject.Find("password");
       passwordPanel.GetComponent<Canvas>().enabled = true;
    }

    public void DestroyWall()
    {
        int angle = FindObjectOfType<MazeManager>().Angle;
        float deleteWall = Mathf.Floor((360f - angle) / 360f * 176f);
        // Debug.Log((360 - angle));
        // Debug.Log((float)((360f - angle) / 360f));
        // Debug.Log((360f - angle) / 360f * 176f);
        for (int i = -3; i < 4; i++)
        {
            Destroy(GameObject.Find($"outerWall{(deleteWall + i)}"), 0);
        }
        Destroy(passwordPanel);
        Destroy(gameObject);
        
    }
}
