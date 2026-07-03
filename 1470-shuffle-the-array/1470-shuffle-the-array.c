

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *shuffle(int *nums, int numsSize, int n, int *returnSize)
{
    int *arr = (int *)malloc(numsSize * sizeof(int));
    int j = 0;
    for (int i = 0; i < numsSize; i++)
    {
        arr[i] = nums[j];
        i = i + 1;
        j++;
    }
    int k = numsSize / 2;
    for (int i = 1; i < numsSize; i++)
    {
        arr[i] = nums[k];
        i = i + 1;
        k++;
    }
    *returnSize = numsSize;
    return arr;
}