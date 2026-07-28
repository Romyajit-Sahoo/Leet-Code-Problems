// #include <stdlib.h>
// struct ListNode
// {
//   int val;
//   struct ListNode *next;
// };
struct ListNode *deleteMiddle(struct ListNode *head)
{

  struct ListNode *temp = head, *prev = head;
  if ( head->next ==NULL)
  {
      free(temp);
      return NULL;
  }
  
  
  int count = 0;
  while (temp != NULL)
  {
    count++;
    temp = temp->next;
  }
  temp = head;
  int middle = (count / 2), i = 0;
  while (i < middle)
  {
    prev = temp;
    temp = temp->next;  
    i++;
  }

  prev->next= temp->next;
  free(temp);
  return head;
}