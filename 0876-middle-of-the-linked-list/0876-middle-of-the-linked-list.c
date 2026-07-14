
//  Definition for singly-linked list.
// #include <stdlib.h>
// struct ListNode
// {
//     int val;
//     struct ListNode *next;
// };

struct ListNode *middleNode(struct ListNode *head)
{
    struct ListNode *temp = head, *middle = head;
    int count = 1, mide , i = 0;
    while (temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }
    mide = count / 2;
    // mide += 1;
    while (i < mide)
    {
       head = head->next;
       i++;
    }
    return head;
}