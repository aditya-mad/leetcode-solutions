class Solution
{
public:
    ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
    {
        ListNode *curr = list1, *merge = list2;

        while (merge->next != NULL)
            merge = merge->next;
        while (a > 1)
        {
            curr = curr->next;
            a--;
            b--;
        }
        ListNode *mergestart = curr;
        while (b > 0)
        {
            curr = curr->next;
            b--;
        }

        mergestart->next = list2;
        merge->next = curr->next;

        return list1;
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */