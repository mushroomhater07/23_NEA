using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MMenu : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }
    

public void playgame(int x){
    SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + x);
}
    // Update is called once per frame
    void Update()
    {
        
    }
}
