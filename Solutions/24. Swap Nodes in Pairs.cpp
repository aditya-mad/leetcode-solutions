class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {
        if (!head || !head->next)
            return head;
        ListNode *one = head;

        while (one && one->next)
        {
            swap(one->val, one->next->val);
            one = one->next ? one->next->next : NULL;
        }

        return head;
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