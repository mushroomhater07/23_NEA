using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MergeSort : MonoBehaviour
{
    public int[] arrayToSort;

    private void Start()
    {
        MergeSortArray(arrayToSort, 0, arrayToSort.Length - 1);
        Debug.Log("Sorted Array: " + string.Join(", ", arrayToSort));
    }

    private void MergeSortArray(int[] arr, int low, int high)
    {
        if (low < high)
        {
            int mid = (low + high) / 2;
            MergeSortArray(arr, low, mid);
            MergeSortArray(arr, mid + 1, high);
            Merge(arr, low, mid, high);
        }
    }

    private void Merge(int[] arr, int low, int mid, int high)
    {
        int n1 = mid - low + 1;
        int n2 = high - mid;

        int[] leftArray = new int[n1];
        int[] rightArray = new int[n2];

        for (int i = 0; i < n1; i++)
        {
            leftArray[i] = arr[low + i];
        }
        for (int j = 0; j < n2; j++)
        {
            rightArray[j] = arr[mid + 1 + j];
        }

        int i = 0;
        int j = 0;
        int k = low;
        while (i < n1 && j < n2)
        {
            if (leftArray[i] <= rightArray[j])
            {
                arr[k] = leftArray[i];
                i++;
            }
            else
            {
                arr[k] = rightArray[j];
                j++;
            }
            k++;
        }

        while (i < n1)
        {
            arr[k] = leftArray[i];
            i++;
            k++;
        }

        while (j < n2)
        {
            arr[k] = rightArray[j];
            j++;
            k++;
        }
    }
}
