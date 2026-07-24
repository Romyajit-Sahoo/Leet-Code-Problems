// // // //  Definition for singly-linked list.
// #include <stdlib.h>
// struct ListNode
// {
//     int val;
//     struct ListNode *next;
// };

struct ListNode *removeElements(struct ListNode *head, int val)
{

    struct ListNode *left, *temp = head;
    if (head == NULL)
    {
        return head;
    }
    struct ListNode *dummy = (struct ListNode *)malloc(sizeof(struct ListNode));
    dummy->val = 0;
    dummy->next = head;
    left = dummy;
    while (temp->next != NULL)
    {

        if (temp->val == val)
        {
            left->next = temp->next;
            free(temp);
            temp = left;
        }
        else
        {
            left = temp;
        }

        temp = temp->next;
    }
    if (temp != NULL && temp->val == val)
    {
        left->next = temp->next;
        free(temp);
    }

    return dummy->next;
}
