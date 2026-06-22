int totalFruit(int *fruits, int fruitsSize)
{
    int low = 0, high = 0, max = 0, freq[100001] = {0}, distinct = 0;
    while (high < fruitsSize)
    {
        if (freq[fruits[high]] == 0)
        {
            distinct++;
        }
        
            freq[fruits[high]]++;
    
        while (distinct > 2)
        {
            if (freq[fruits[low]] == 1)
            {
                distinct--;
            }
            freq[fruits[low]]--;
            low++;
        }
        int len = high - low + 1;
        if (len > max)
        {
            max = len;
        }
        high++;
    }
    return max;
}