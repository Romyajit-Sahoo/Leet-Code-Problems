// #include <stdlib.h>
// struct ListNode
// {
//   int val;
//   struct ListNode *next;
// };

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
{
  struct ListNode *temp1 = headA, *temp2 = headB;
  
  
  while (temp1 != NULL)
  {

    while (temp2 != NULL)
    {
      if (temp1 == temp2)
      {

        return temp1;
      }
      temp2 = temp2->next;
    }
    temp2 = headB;
    temp1 = temp1->next;
  }

  return NULL;
}