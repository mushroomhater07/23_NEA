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