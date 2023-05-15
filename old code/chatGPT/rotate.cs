using UnityEngine;

public class CirclePosition : MonoBehaviour
{
    public Vector2 center;
    public float radius;
    public Vector2 startingPoint;
    public float meterWidth;

    private void Start()
    {
        float length = Vector2.Distance(startingPoint, center);
        float circumference = 2 * Mathf.PI * radius;
        float arcLength = meterWidth / length * circumference;
        float centralAngle = arcLength / circumference * 360;
        Vector2 endPoint = RotatePointAroundPivot(startingPoint, center, Quaternion.Euler(0, 0, centralAngle));
        Debug.Log("Circle position with " + meterWidth + " meter width: " + endPoint);
    }

    private Vector2 RotatePointAroundPivot(Vector2 point, Vector2 pivot, Quaternion rotation)
    {
        Vector3 rotatedPoint = rotation * (new Vector3(point.x, point.y, 0) - new Vector3(pivot.x, pivot.y, 0)) + new Vector3(pivot.x, pivot.y, 0);
        return new Vector2(rotatedPoint.x, rotatedPoint.y);
    }
}
