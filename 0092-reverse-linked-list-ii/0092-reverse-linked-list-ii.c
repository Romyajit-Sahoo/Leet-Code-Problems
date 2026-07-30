// #include <stdlib.h>
// struct ListNode
// {
//   int val;
//   struct ListNode *next;
// };

struct ListNode *reverseBetween(struct ListNode *head, int left, int right)
{
  struct ListNode *temp1 = head, *temp2 = head, *prev = NULL, *nexttt, *tempRight = head, *curr = head, *refer, dummy;
  int i = 1, j = 1;
  // FOR RIGHT ITERATION
  while (j <= right)
  {
    temp2 = tempRight;
    tempRight = tempRight->next;
    j++;
  }
  temp2->next = NULL;
  // FOR LEFT ITERATION
  while (i < left)
  {
    temp1 = curr;
    curr = curr->next;
    i++;
  }
  if (left > 1)
  {
    temp1->next = NULL;
  }

  nexttt = curr;
  refer = curr;
  while (curr != NULL)
  {
    nexttt = curr->next;
    curr->next = prev;
    prev = curr;
    curr = nexttt;
  }

  temp1->next = temp2;
  refer->next = tempRight;
  if (left == 1)
  {
    head = prev;
  }

  return head;
}