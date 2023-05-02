using UnityEngine;

public class fadeoutimage : MonoBehaviour
{

    private void Update()
    {
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
            Destroy(this.gameObject);
    }
}