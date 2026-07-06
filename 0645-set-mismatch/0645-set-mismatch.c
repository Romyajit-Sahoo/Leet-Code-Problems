/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *findErrorNums(int *nums, int numsSize, int *returnSize)
{
    int freq[100000] = {0}, j = 0, expectedSum = 0, actualSum = 0, unknownElement, duplicate;
    int *arr = (int *)malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++)
    {
        freq[nums[i]]++;
    }
    for (int m = 1; m <= numsSize; m++)
    {
        expectedSum += m;
    }
    for (int n = 0; n < numsSize; n++)
    {
        actualSum += nums[n];
    }
    for (int i = 0; i < numsSize; i++)
    {

        if (freq[nums[i]] > 1)
        {
            for (int k = 1; k <= numsSize; k++)
            {
                if (freq[k] == 0)
                {
                    arr[j] = nums[i];
                    duplicate = arr[j];
                    j++;
                    unknownElement = expectedSum + duplicate - actualSum;
                    arr[j] = unknownElement;
                    j++;
                }
            }
            break;
        }
    }
    *returnSize = j;
    return arr;
}
