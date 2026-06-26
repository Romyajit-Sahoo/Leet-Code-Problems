#include <string.h>
char *reversePrefix(char *word, char ch)
{
    int left = 0, right = -1, len = strlen(word);
    for (int i = 0; i < len; i++)
    {
        if (word[i] == ch)
        {
            right = i;
            break;
        }
    }
    if (right == -1)
    {
        return word;
    }

    while (left < right)
    {
        char temp = word[right];
        word[right] = word[left];
        word[left] = temp;
        left++;
        right--;
    }
    return word;
}