// #include <stdbool.h>
// #include <stdlib.h>
// struct ListNode
// {
//   int val;
//   struct ListNode *next;
// };
bool isPalindrome(struct ListNode *head)
{
  struct ListNode *leftnull = head, *right = head, *temp = head, *left;
  int mid, count = 0, i = 1;

  while (temp != NULL)
  {
    count++;
    temp = temp->next;
  }

  if (count % 2 == 0)
  {
    mid = count / 2;
  }
  else
  {
    mid = (count / 2) + 1;
  }

  while (i <= mid)
  {
    leftnull = right;
    right = right->next;
    i++;
  }
  leftnull->next = NULL;
  left = head;
  struct ListNode *prev = NULL, *curr = right, *nextt = right;
  while (curr != NULL)
  {
    nextt = curr->next;
    curr->next = prev;
    prev = curr;
    curr = nextt;
  }

  while (left != NULL && prev != NULL)
  {
    if (left->val == prev->val)
    {
      left = left->next;
      prev = prev->next;
    }
    else
    {
      return false;
    }
    
  }

  return true;
}