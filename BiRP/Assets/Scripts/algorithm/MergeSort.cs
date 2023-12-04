using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MergeSortAlgo: MonoBehaviour{
    public Leaderboard[] MergeSort(Leaderboard[] list, int sortData)
    {int mid = list.Length / 2;

        if (list.Length <= 1)
        {
            return list;
        }
        Leaderboard[] left = new Leaderboard[mid];
        Leaderboard[] right = new Leaderboard[list.Length - mid];

        for (int i = 0; i < left.Length; i++)
        {
            left[i] = list[i];
        }

        for (int i = 0; i < right.Length; i++)
        {
            right[i] = list[i + mid];
        }

        left = MergeSort(left, sortData);
        right = MergeSort(right, sortData);

        return Merge(left, right,sortData);
    }
    Leaderboard[] Merge(Leaderboard[] left, Leaderboard[] right, int dataToSort)
    {
        Leaderboard[] result = new Leaderboard[left.Length + right.Length];
        int leftIndex = 0;
        int rightIndex = 0;
        int resultIndex = 0;

        while (leftIndex < left.Length && rightIndex < right.Length)
        {
            int comparsion;
            switch (dataToSort)
            {
                case 1:
                    comparsion = left[leftIndex].Level.CompareTo(right[rightIndex].Level);
                    break;
                case 2:
                    comparsion = left[leftIndex].Score.CompareTo(right[rightIndex].Score);
                    break;
                case 3:
                    comparsion = left[leftIndex].Since.CompareTo(right[rightIndex].Since);
                    break;
                default:
                    comparsion = left[leftIndex].Username.CompareTo(right[rightIndex].Username);
                    break;
            }
            if (comparsion< 0)
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
// using System.Collections;
// using System.Collections.Generic;
// using UnityEngine;
//
// public class MergeSort : MonoBehaviour
// {
//     public int[] arrayToSort;
//
//     private void Start()
//     {
//         MergeSortArray(arrayToSort, 0, arrayToSort.Length - 1);
//         Debug.Log("Sorted Array: " + string.Join(", ", arrayToSort));
//     }
//
//     private void MergeSortArray(int[] arr, int low, int high)
//     {
//         if (low < high)
//         {
//             int mid = (low + high) / 2;
//             MergeSortArray(arr, low, mid);
//             MergeSortArray(arr, mid + 1, high);
//             Merge(arr, low, mid, high);
//         }
//     }
//
//     private void Merge(int[] arr, int low, int mid, int high)
//     {
//         int n1 = mid - low + 1;
//         int n2 = high - mid;
//
//         int[] leftArray = new int[n1];
//         int[] rightArray = new int[n2];
//
//         for (int i = 0; i < n1; i++)
//         {
//             leftArray[i] = arr[low + i];
//         }
//         for (int j = 0; j < n2; j++)
//         {
//             rightArray[j] = arr[mid + 1 + j];
//         }
//
//         int i = 0;
//         int j = 0;
//         int k = low;
//         while (i < n1 && j < n2)
//         {
//             if (leftArray[i] <= rightArray[j])
//             {
//                 arr[k] = leftArray[i];
//                 i++;
//             }
//             else
//             {
//                 arr[k] = rightArray[j];
//                 j++;
//             }
//             k++;
//         }
//
//         while (i < n1)
//         {
//             arr[k] = leftArray[i];
//             i++;
//             k++;
//         }
//
//         while (j < n2)
//         {
//             arr[k] = rightArray[j];
//             j++;
//             k++;
//         }
//     }
// }