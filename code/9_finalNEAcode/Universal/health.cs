using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;

public class playerhealth : MonoBehaviour
{
    // Start is called before the first frame update
    Slider HealthFront;
    TMP_Text healthtext;
    public float HealthValue;
    public float maxHealth;
    public float chipspeed;
    Slider fillarea;
    Image fillareaimg;

    //timer effect
    public bool increase, decrease;
    public float targethealth;
    Slider HealthBack;
    float time;
    void Update()
    {
        if ((HealthBack == null || HealthFront == null || healthtext == null || fillareaimg == null) &&
            SceneManager.GetActiveScene().buildIndex == 3)
        {HealthBack = GameObject.Find("HealthFront").GetComponent<Slider>();
            HealthFront = GameObject.Find("HealthBack").GetComponent<Slider>();
            healthtext = GameObject.Find("Health").GetComponentInChildren<TMP_Text>();
            fillareaimg = GameObject.Find("ChipAway").GetComponent<Image>();
            HealthValue = maxHealth;
            HealthBack.maxValue = maxHealth; HealthBack.value = maxHealth;HealthBack.interactable = false;
            HealthFront.maxValue = maxHealth;HealthFront.value = maxHealth;HealthFront.interactable = false;
            targethealth =0f;}
        UpdateUI();
        HealthValue = Mathf.Clamp(HealthValue,0,maxHealth);
        healthtext.text = (int)HealthValue + "/" + maxHealth;
    }
    void UpdateUI(){
        // Debug.Log(targethealth);
        gameOverCheck();
        time += Mathf.Pow(Time.deltaTime,0.5f);
        float speed = time * chipspeed;
        
        if(decrease){
            HealthBack.value = HealthValue;
            HealthFront.value -= speed;
            targethealth += speed;
            changecolor(Color.red);
            if(targethealth>0){
                resetchange();
            }
            // healthtext.text = (int)HealthFront.value + "/" + maxHealth;
        }else if(increase){
            HealthFront.value = HealthValue;
            HealthBack.value +=speed;
            targethealth -= speed;
            changecolor(Color.blue);
            if(targethealth < 0){
                resetchange();
            }
            // healthtext.text = (int)HealthBack.value + "/" + maxHealth;
        }
    }
    void gameOverCheck(){
        if(HealthValue <=0){
            FindObjectOfType<MazeManager>().Dead();
        }
    }
    void resetchange(){
        targethealth = 0;
        increase = false; decrease = false;
        changecolor(Color.white);
    }
    void changecolor(Color color){
        fillareaimg.color = color;
    }
    public void changeHP(int hp){
        // Debug.Log(hp);
        time = 0;
        HealthValue += (float)hp;
        targethealth += (hp);
        if(targethealth >0) increase = true; else decrease = true;
    }
}
