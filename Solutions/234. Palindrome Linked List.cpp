class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        ListNode *slow = head, *fast = head->next;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *curr = slow->next, *start = NULL;

        while (curr)
        {
            fast = curr->next;
            curr->next = start;
            start = curr;
            curr = fast;
        }

        while (start)
        {
            if (start->val != head->val)
                return false;
            head = head->next;
            start = start->next;
        }

        return true;
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
