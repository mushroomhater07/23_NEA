using System.Collections;
using UnityEngine;
using UnityEngine.UI;
public class Fading : MonoBehaviour
{
    [HideInInspector]public float fadeSpeed;

    public Fading(float _fadespeed= 0.5f)
    {
        fadeSpeed = _fadespeed;
    }
    
    IEnumerator FadeInA(Image ren){
        // if (ren = null)ren = this.GetComponent<Image>();
        Color color = ren.color; 
        ren.color = new Color(color.r, color.g, color.b, 0);
        while(ren.color.a <=1) {
            var fadeAmount = color.a + (fadeSpeed * Time.deltaTime);

            color = new Color(color.r, color.g,color.b, fadeAmount);
            ren.color = color;
            yield return null;
        }
    }
    IEnumerator FadeOutA(Image ren){
        // if (ren = null)ren = this.GetComponent<Image>();
        Color color = ren.color; 
        ren.color = new Color(color.r, color.g, color.b, 1);
        // Debug.Log(ren.color.a);
        while(ren.color.a >= 0f) {
            // Debug.Log(ren.color);
            var fadeAmount = color.a - (fadeSpeed * Time.deltaTime);
            color = new Color(color.r, color.g,color.b, fadeAmount);
            ren.color = color;
            yield return null;
        }
        DestroyImmediate(ren.gameObject);
    }
    public void FadeIn(Image ren){
        Debug.Log(ren);StartCoroutine(FadeInA(ren));
        }
    public void FadeOut(Image ren){
        StartCoroutine(FadeOutA(ren));
        }
}
