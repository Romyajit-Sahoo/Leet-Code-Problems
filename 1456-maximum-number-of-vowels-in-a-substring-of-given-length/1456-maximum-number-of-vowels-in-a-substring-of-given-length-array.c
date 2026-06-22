int maxVowels(char *s, int k)
{
    int max = 0, vowel = 0;
    for (int i = 0; i < k; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            vowel++;
        }
        if (vowel > max)
        {
            max = vowel;
        }
    }
    for (int i = k; s[i] != '\0'; i++)
    {
        if (s[i - k] == 'a' || s[i - k] == 'e' || s[i - k] == 'i' || s[i - k] == 'o' || s[i - k] == 'u')
        {
            vowel--;
        }
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            vowel++;
        }
        if (vowel > max)
        {
            max = vowel;
        }
    }
    return max;
}