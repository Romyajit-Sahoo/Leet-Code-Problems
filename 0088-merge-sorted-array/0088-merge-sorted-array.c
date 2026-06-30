void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
    int left = 0;
    int currnt, prev;
    for (int i = m; i < nums1Size; i++)
    {
        nums1[i] = nums2[left];
        left++;
    }
    for (int i = 1; i < nums1Size; i++)
    {
        currnt = nums1[i];
        prev = i - 1;
        while (prev >= 0 && nums1[prev] > currnt)
        {
            nums1[prev + 1] = nums1[prev];
            prev--;
        }
        nums1[prev + 1] = currnt;
    }
}