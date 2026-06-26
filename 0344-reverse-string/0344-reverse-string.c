void reverseString(char *s, int sSize)
{
    int left = 0, right = sSize - 1;
    while (left < right)
    {
        char temp = s[right];
        s[right] = s[left];
        s[left] = temp;
        left++;
        right--;
    }
}