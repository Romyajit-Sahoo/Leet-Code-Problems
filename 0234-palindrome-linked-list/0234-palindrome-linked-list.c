// #include <stdbool.h>
// #include <stdlib.h>
// struct ListNode
// {
//   int val;
//   struct ListNode *next;
// };

bool isPalindrome(struct ListNode *head)
{
  struct ListNode *temp = head, *sectemp = head;
  int size = 0, i = 0;

  while (temp != NULL)
  {
    size++;
    temp = temp->next;
  }

  int arr[size];

  while (sectemp != NULL)
  {
    arr[i] = sectemp->val;
    i++;
    sectemp = sectemp->next;
  }

  int left = 0, right =  size - 1;
  while (left < right)
  {
    if (arr[left] == arr[right])
    {
      left++;
      right--;  
    }
    else
    {
      return false;

    }
    
  }
  return  true ;
}
