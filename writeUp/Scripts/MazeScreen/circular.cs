using UnityEngine;

namespace MazeScreen
{
    public class circular : MonoBehaviour
    {
        private Vector2 center;
        [SerializeField] private float radius;
        [SerializeField] private Vector2 startingPoint;
        [SerializeField] private float meterWidth;
        [SerializeField] private float repeat,angle;
        
        [SerializeField] private GameObject objectToRotate;
        private Vector3 rotationPoint;
        private float rotationSpeed;
        private void Start()
        {
            MazeManager maze1 =FindObjectOfType<MazeManager>();
            maze1.enabled = true;
            objectToRotate = GameObject.Find("blockingWall");
            ObjectCloner oc = new ObjectCloner();
            float length = Vector2.Distance(startingPoint, center);
            float circumference = 2 * Mathf.PI * radius;
            float arcLength = meterWidth / length * circumference;
            float centralAngle = arcLength / circumference * 360;
            GameObject wall = Resources.Load<GameObject>("Maze/wall");
            for (int i = 0; i < repeat; i++)
            {
                startingPoint =RotatePointAroundPivot(startingPoint, center, Quaternion.Euler(0, 0, centralAngle));
                
                GameObject instantiateWall = Instantiate(wall, GameObject.Find("outerWall").transform);
                instantiateWall.name = $"outerWall{i}";
                instantiateWall.transform.localScale = new Vector3(20, 15, 1);
                instantiateWall.transform.position = new Vector3(startingPoint.x,0,startingPoint.y);
                instantiateWall.transform.localRotation = Quaternion.Euler(new Vector3(0,180-i*angle,0));

            }

            for (int i = 0; i < 3; i++)
            {
                objectToRotate = oc.CloneObject(objectToRotate, Vector3.zero);
                objectToRotate.transform.RotateAround(rotationPoint, Vector3.up, 90f);
                objectToRotate.name = $"blockingWall{i}";
            }
        }

    private Vector2 RotatePointAroundPivot(Vector2 point, Vector2 pivot, Quaternion rotation)
    {
        Vector3 rotatedPoint = rotation * (new Vector3(point.x, point.y, 0) - new Vector3(pivot.x, pivot.y, 0)) + new Vector3(pivot.x, pivot.y, 0);
        return new Vector2(rotatedPoint.x, rotatedPoint.y);
    }
    }
    
}