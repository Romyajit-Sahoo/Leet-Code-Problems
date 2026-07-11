
//   Definition for singly-linked list.
// struct ListNode
// {
//     int val;
//     struct ListNode *next;
// };

#include <stdlib.h>
struct ListNode *rotateRight(struct ListNode *head, int k)
{
    int count = 0, lenght = 1, rotate;
    struct ListNode *end = head, *start = head, *prev = head;
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    while (end->next != NULL)
    {
        prev = end;
        end = end->next;
        lenght++;
    }
    rotate = k % lenght;
    if (head == NULL || head->next == NULL, rotate == 0)
    {
        return head;
    }
    while (count < rotate)
    {
        prev->next = NULL;
        end->next = start;
        head = end;
        start = end;
        end = head;
        prev = head;
        while (end->next != NULL)
        {
            prev = end;
            end = end->next;
        }

        count++;
    }
    return head;
}