using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Fading : MonoBehaviour
{
    [SerializeField] private float fadespeed;
    public void FadeIn(Image ren){StartCoroutine(FadeInA(ren));}
    public void FadeOut(Image ren){StartCoroutine(FadeOutA(ren));}
    public IEnumerator FadeInA(Image ren){
        // if (ren = null)ren = this.GetComponent<Image>();
        Color color = ren.color; 
        ren.color = new Color(color.r, color.g, color.b, 0);
        while(ren.color.a <=1){
        float fadeAmount = color.a + (fadespeed * Time.deltaTime);

        color = new Color(color.r, color.g,color.b, fadeAmount);
        ren.color = color;
        yield return null;
        }
    }
    public IEnumerator FadeOutA(Image ren){
        // if (ren = null)ren = this.GetComponent<Image>();
        Color color = ren.color; 
        ren.color = new Color(color.r, color.g, color.b, 1);
        while(ren.color.a >=0){
        float fadeAmount = color.a - (fadespeed * Time.deltaTime);

        color = new Color(color.r, color.g,color.b, fadeAmount);
        ren.color = color;
        yield return null;
        }
    }
}
