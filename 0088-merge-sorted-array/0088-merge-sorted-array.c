void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
    int left = 0;
    int currnt, prev;
    for (int i = m; i < nums1Size; i++)
    {
        nums1[i] = nums2[left];
        left++;
    }
    for (int i = 0; i < nums1Size - 1; i++)
    {
        int smallest_index = i;

        for (int j = i + 1; j < nums1Size; j++)
        {
            if (nums1[j] < nums1[smallest_index])
            {
                smallest_index = j;
            }
        }
        // Swap after inner loop
        int temp = nums1[i];
        nums1[i] = nums1[smallest_index];
        nums1[smallest_index] = temp;
    }
}