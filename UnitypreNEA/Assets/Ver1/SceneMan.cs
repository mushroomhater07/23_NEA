using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;

public class SceneMan : MonoBehaviour{
    [SerializeField] private GameObject loadpanel;
    [SerializeField] private Slider slider;
    [SerializeField] private TMP_Text progresstxt;
    [SerializeField] private TMP_Text loadingtxt;
    public void SlowChange(int index){
        StartCoroutine(SlowChangeScene(index));
    }
    public void FastChange(int index){
        SceneManager.LoadScene(index);
    }
     IEnumerator SlowChangeScene(int index)
    {
        yield return null;
        loadpanel.SetActive(true);
        //Begin to load the Scene you specify
        AsyncOperation loading = SceneManager.LoadSceneAsync(index);
        //Don't let the Scene activate until you allow it to
        loading.allowSceneActivation = false;
        //When the load is still in progress, output the Text and progress bar
        while (!loading.isDone)
        {
            slider.value = loading.progress;
            progresstxt.color = Color.black;
            progresstxt.SetText((slider.value * 100).ToString() + "%");            
            if (loading.progress >= 0.9f)
            {
                slider.value = 1;
                //Change the Text to show the Scene is ready
                progresstxt.SetText((slider.value * 100).ToString() + "%");
                loadingtxt.fontSize = 16;
                loadingtxt.SetText("Press anywhere to continue");
                //Wait to you press the space key to activate the Scene
                if (Input.anyKeyDown)
                    //Activate the Scene
                    loading.allowSceneActivation = true;
            }

            yield return null;
        }
    }
}
