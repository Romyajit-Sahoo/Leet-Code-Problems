// #include <stdlib.h>
// struct ListNode
// {
//     int val;
//     struct ListNode *next;
// };
struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2)
{
    if (list1 == NULL && list2 == NULL)
    {
        return list1;
    }
    if (list1 == NULL )
    {
        return list2;
    }
    if (list2 == NULL)
    {
        return list1;
    }
    
    
    struct ListNode *temp1 = list1, *head;
    head = temp1;
    while (temp1->next != NULL)
    {
        temp1 = temp1->next;
    }
    temp1->next = list2;

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    struct ListNode *sorted_head = NULL;
    struct ListNode *curr = head;

    while (curr != NULL)
    {
        struct ListNode *next_node = curr->next; // Save next node

        // Case 1: Insert at the very beginning of the sorted list
        if (sorted_head == NULL || sorted_head->val >= curr->val)
        {
            curr->next = sorted_head;
            sorted_head = curr;
        }
        // Case 2: Insert somewhere in the middle or at the end
        else
        {
            struct ListNode *search = sorted_head;
            while (search->next != NULL && search->next->val < curr->val)
            {
                search = search->next;
            }
            curr->next = search->next;
            search->next = curr;
        }

        curr = next_node; // Move to next node from original list
    }

    return sorted_head;
}