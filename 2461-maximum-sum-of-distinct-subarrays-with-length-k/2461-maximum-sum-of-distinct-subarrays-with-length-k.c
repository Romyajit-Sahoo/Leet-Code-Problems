long long maximumSubarraySum(int *nums, int numsSize, int k)
{
    int freq[1000000] = {0}, distinct = 0;
    long long sum = 0, max = 0;
    for (int i = 0; i < k; i++)
    {
        if (freq[nums[i]] == 0)
        {
            distinct++;
        }
        sum = sum + nums[i];
        freq[nums[i]]++;
    }
    if (distinct == k)
    {
        if (sum > max)
        {
            max = sum;
        }
    }

    for (int i = k; i < numsSize; i++)
    {
        freq[nums[i - k]]--;
        if (freq[nums[i - k]] == 0)
        {
            distinct--;
        }
        sum = sum - nums[i - k];
        sum = sum + nums[i];
        if (freq[nums[i]] == 0)
        {
            distinct++;
        }
        if (distinct == k)
        {
            if (sum > max)
            {
                max = sum;
            }
        }

        freq[nums[i]]++;
    }
    return max;
}