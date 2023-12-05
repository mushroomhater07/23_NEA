using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class health : MonoBehaviour
{
    // Start is called before the first frame update
    public float currenthealth;
    public GameObject healthbar;
    public Button button;
    void Start()
    {
        currenthealth = 100.0f;
        button = GetComponent<Button>();
        healthbar.transform.localScale = Vector3.zero;
    }

    // Update is called once per frame
    void Update()
    {


    }
    public void minusHP(){
        currenthealth -= 20f;
    }
}
