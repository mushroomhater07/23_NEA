using UnityEngine;
using UnityEngine.TerrainUtils;

public class TerrainFollower : MonoBehaviour
{
    public Terrain terrain;

    private Vector3 terrainSize;
    private Vector3 terrainPos;

    void Start()
    {
        terrainSize = terrain.terrainData.size;
        terrainPos = terrain.transform.position;
    }

    void Update()
    {
        float x = (transform.position.x - terrainPos.x) / terrainSize.x;
        float z = (transform.position.z - terrainPos.z) / terrainSize.z;

        float y = terrain.SampleHeight(transform.position);
        // float slope = terrain.GetSteepness(x, z);
        float slope = 6;
        if (slope >= 30)
        {
            y = terrainPos.y + terrainSize.y;
        }

        transform.position = new Vector3(transform.position.x, y, transform.position.z);
    }
}
//
// using UnityEngine;
//
// public class CharacterController : MonoBehaviour
// {
//     public float speed = 10.0f;
//     public float jumpForce = 10.0f;
//     public float raycastDistance = 1.0f;
//     public LayerMask groundLayer;
//
//     private Rigidbody rb;
//     private Vector3 moveDirection;
//
//     void Start()
//     {
//         rb = GetComponent<Rigidbody>();
//     }
//
//     void Update()
//     {
//         moveDirection = new Vector3(Input.GetAxis("Horizontal"), 0, Input.GetAxis("Vertical"));
//         moveDirection = transform.TransformDirection(moveDirection);
//         moveDirection *= speed * Time.deltaTime;
//
//         RaycastHit hit;
//         if (Physics.Raycast(transform.position, -Vector3.up, out hit, raycastDistance, groundLayer))
//         {
//             float y = hit.point.y;
//             transform.position = new Vector3(transform.position.x, y, transform.position.z);
//         }
//
//         if (Input.GetKeyDown(KeyCode.Space) && IsGrounded())
//         {
//             rb.AddForce(Vector3.up * jumpForce, ForceMode.Impulse);
//         }
//
//         rb.MovePosition(transform.position + moveDirection);
//     }
//
//     bool IsGrounded()
//     {
//         return Physics.Raycast(transform.position, -Vector3.up, raycastDistance, groundLayer);
//     }
// }
