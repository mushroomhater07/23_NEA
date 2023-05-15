using UnityEngine;
using System.Collections;

public class SortableObject : MonoBehaviour
{
    public string sortingString;
}

public class MergeSortExample : MonoBehaviour
{
    public SortableObject[] objectsToSort; //object[]

    void Start()
    {
        
        objectsToSort = MergeSort(objectsToSort);

        Debug.Log("Sorted:");
        foreach (var obj in objectsToSort)
        {
            Debug.Log(obj.sortingString);
        }
    }

    SortableObject[] MergeSort(SortableObject[] arr)
    {
        if (arr.Length <= 1)
        {
            return arr;
        }

        int mid = arr.Length / 2;
        SortableObject[] left = new SortableObject[mid];
        SortableObject[] right = new SortableObject[arr.Length - mid];

        for (int i = 0; i < left.Length; i++)
        {
            left[i] = arr[i];
        }

        for (int i = 0; i < right.Length; i++)
        {
            right[i] = arr[i + mid];
        }

        left = MergeSort(left);
        right = MergeSort(right);

        return Merge(left, right);
    }

    SortableObject[] Merge(SortableObject[] left, SortableObject[] right)
    {
        SortableObject[] result = new SortableObject[left.Length + right.Length];
        int leftIndex = 0;
        int rightIndex = 0;
        int resultIndex = 0;

        while (leftIndex < left.Length && rightIndex < right.Length)
        {
            if (left[leftIndex].sortingString.CompareTo(right[rightIndex].sortingString) < 0)
            {
                result[resultIndex] = left[leftIndex];
                leftIndex++;
            }
            else
            {
                result[resultIndex] = right[rightIndex];
                rightIndex++;
            }
            resultIndex++;
        }

        while (leftIndex < left.Length)
        {
            result[resultIndex] = left[leftIndex];
            leftIndex++;
            resultIndex++;
        }

        while (rightIndex < right.Length)
        {
            result[resultIndex] = right[rightIndex];
            rightIndex++;
            resultIndex++;
        }

        return result;
    }
}
