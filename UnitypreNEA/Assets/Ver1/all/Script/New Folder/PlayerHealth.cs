using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerHealth : MonoBehaviour
{
    // Start is called before the first frame update

    private float health;
    private float lerpTimer;
    public float maxHealth;
    public float chipSpeed = 2f;
    public Image frontHealthBar;
    public Image backHealthBar;



    void Start()
    {
        health = maxHealth;
    }

    // Update is called once per frame
    void Update()
    {
        health = Mathf.Clamp(health, 0, maxHealth);
        UpdateHealthUI();
        if (Input.GetKeyDown(KeyCode.A))
        {
            TakeDamage(Random.Range(5,10));
        }
    }
    void UpdateHealthUI(){
        Debug.Log(health);
        float fillF = frontHealthBar.fillAmount;
        float fillB = backHealthBar.fillAmount;
        float healthratio = health / maxHealth;
        if (fillB > healthratio) {
            frontHealthBar.fillAmount = healthratio;
            backHealthBar.color = Color.yellow;
            lerpTimer+= Time.deltaTime;
            float percentComplete = lerpTimer / chipSpeed;
            backHealthBar.fillAmount = Mathf.Lerp(fillB, healthratio, percentComplete);
        }

    }
    public void TakeDamage(float damage){
        health -= damage;
        lerpTimer = 0f;
    }
}
