/**
 * Note: The returned array must be malloced, assume caller calls free().
//  */
    int *twoSum(int *numbers, int numbersSize, int target, int *returnSize)
    {
    int left = 0, right = numbersSize - 1;
     int * result = (int *)malloc(2 * sizeof(int));
    while (left < right)
    {
        if (numbers[left] + numbers[right] == target)
        {
            result[0] = left + 1;
            result[1] = right + 1;
            break;
        }
        else if (numbers[left] + numbers[right] > target)
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    *returnSize = 2 ;
    return result;
}




// /**
//  * Note: The returned array must be malloced, assume caller calls free().
//  */
// int *twoSum(int *numbers, int numbersSize, int target, int *returnSize)
// {
//     int *result = (int *)malloc(2 * sizeof(int));
//     for (int i = 0; i < numbersSize; i++)
//     {
//         for (int j = i +1; j < numbersSize; j++)
//         {
//             if (numbers[i] + numbers[j] == target)
//             {
//                 result[0] = i+1;
//                 result[1] = j+1;
//                *returnSize = 2;
//                 return result;
//             }
//         }
//     }
//     *returnSize = 0;
//     return NULL;
// }

