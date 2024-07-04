class Solution
{
public:
    ListNode *mergeNodes(ListNode *head)
    {
        ListNode *curr = head->next, *temp = head;
        int sum = 0;
        while (curr->next != NULL)
        {
            if (curr->val == 0)
                temp->val = sum, temp->next = curr, temp = temp->next, sum = 0;
            else
                sum += curr->val;
            curr = curr->next;
        }
        temp->val = sum, temp->next = NULL;
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