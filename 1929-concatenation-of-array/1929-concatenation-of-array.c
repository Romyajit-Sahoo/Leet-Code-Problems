/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *getConcatenation(int *nums, int numsSize, int *returnSize)
{
    int *arr = (int *)malloc((numsSize * 2) * sizeof(int));
    int size = numsSize * 2;
    for (int i = 0; i < numsSize; i++)
    {
        arr[i] = nums[i];
    }
    int j = 0;
    for (int i = numsSize; i < size; i++)
    {
        arr[i] = nums[j];
        j++;
    }
    *returnSize = numsSize * 2;
    return arr;
}