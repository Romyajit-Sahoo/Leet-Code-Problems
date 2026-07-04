int findMaxConsecutiveOnes(int *nums, int numsSize)
{
    int sum = 0, maxsum = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == 0)
        {
            sum = 0;
        }
        else
        {
            sum = sum + nums[i];
        }

        if (sum > maxsum)
        {
            maxsum = sum;
        }
    }
     
   return maxsum;
     
}