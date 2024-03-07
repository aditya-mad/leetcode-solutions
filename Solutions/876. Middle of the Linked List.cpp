class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *ans = head, *curr = head;

        while (curr && curr->next)
        {
            ans = ans->next;
            curr = curr->next->next;
        }

        return ans;
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
