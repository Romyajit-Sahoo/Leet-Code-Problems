/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *findDisappearedNumbers(int *nums, int numsSize, int *returnSize)
{

    int *arr = (int *)malloc(1000000 * sizeof(int));
    int freq[1000000] = {0}, j = 0;
    for (int i = 0; i < numsSize; i++)
    {
        freq[nums[i]]++;
    }

    for (int i = 1; i <= numsSize; i++)
    {
        if (freq[i] == 0)
        {
            arr[j] = i;
            j++;
        }
    }
    *returnSize = j;
    return arr;
}