using UnityEngine;

public class AxeThrow : MonoBehaviour
{
    public GameObject axePrefab;
    public float throwForce = 10.0f;

    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            GameObject axe = Instantiate(axePrefab, transform.position, transform.rotation);
            Rigidbody rb = axe.GetComponent<Rigidbody>();
            rb.AddForce(transform.forward * throwForce, ForceMode.Impulse);
        }
    }
}