
// Definition for singly-linked list.
// #include <stdlib.h>
// struct ListNode
// {
//     int val;
//     struct ListNode *next;
// };

struct ListNode *removeNthFromEnd(struct ListNode *head, int n)
{
    int count = 1, last, i = 1;
    struct ListNode *temp = head, *prev = head, *right = head, *nextt;

    while (temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }

    last = (count - n) + 1;
    if (last == 1)
    {
        head = head->next;
        free(right);
        return head;
    }

    while (i < last)
    {
        prev = right;
        right = right->next;
        i++;
    }
    nextt = right->next;
    prev->next = nextt;
    free(right);
    return head;
}