using UnityEngine;
using UnityEngine.UI;

[System.Serializable]
public class item : MonoBehaviour
{
    public int maxStack ;
    public Image itemImage;
    private GameObject obj;
    public string itemName  ,itemDescription;
    public float Weight, damage;
    public bool Weapon, throwable, shootable;
    private PickUp pickupScript;
    
    [SerializeField] private float triggerradius = 1f;

    public bool Shootable
    {
        get => shootable;
        set => shootable = value;
    }

    public bool Throwable
    {
        get => throwable;
        set => throwable = value;
    }

    public GameObject Obj
    {
        get => obj;
        set => obj = value;
    }

    private void OnEnable()
    {
        pickupScript = FindObjectOfType<PickUp>();
        SphereCollider trigger = gameObject.AddComponent<SphereCollider>();
        trigger.isTrigger = true;
        trigger.radius = triggerradius;
        if (throwable)
        {
            // AxeThrow throw
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        pickupScript.items.Add(gameObject.GetComponent<item>());
    }
    

    private void OnTriggerExit(Collider other)
    {
        pickupScript.items.Remove(gameObject.GetComponent<item>());
    }
}