using UnityEngine;

public class ObjectCloner : MonoBehaviour
{

    public GameObject CloneObject(GameObject originalObject, Vector3 positionOffset)
    {
        GameObject clone = Instantiate(originalObject, originalObject.transform.position + positionOffset, originalObject.transform.rotation);
        clone.transform.parent = originalObject.transform.parent;
        return clone;
    }
}