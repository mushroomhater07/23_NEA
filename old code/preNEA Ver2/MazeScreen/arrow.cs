using UnityEngine;

public class ArrowShooter : MonoBehaviour
{
    public GameObject arrowPrefab;
    public Transform arrowSpawnPoint;
    public float shootForce = 10.0f;

    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            GameObject arrow = Instantiate(arrowPrefab, arrowSpawnPoint.position, arrowSpawnPoint.rotation);
            Rigidbody arrowRB = arrow.GetComponent<Rigidbody>();
            arrowRB.AddForce(arrowSpawnPoint.forward * shootForce, ForceMode.Impulse);
        }
    }
}