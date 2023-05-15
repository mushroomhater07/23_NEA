using UnityEngine;
[CreateAssetMenu]
public class ItemDatabase : ScriptableObject
{
    public item[] items;

    public item Getitem(int index)
    {
        return items[index];
    }
}