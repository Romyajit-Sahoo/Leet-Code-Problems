// #include <stdlib.h>
// struct ListNode
// {
//     int val;
//     struct ListNode *next;
// };

struct ListNode *reverseList(struct ListNode *head)
{

    struct ListNode *prev = head , * curr= head,  * nextt  = head ;
    prev  = NULL;
    curr  = head;
    while (curr != NULL)
    {
        nextt = curr->next ; 
        curr->next = prev; 
        prev = curr;
        curr = nextt;
    }
    
     return prev;
}