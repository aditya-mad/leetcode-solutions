class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int size = 0;
        ListNode *curr = head;
        while (curr)
        {
            size++;
            curr = curr->next;
        }
        curr = head;
        size -= n;
        if (size == 0)
            return head->next;
        for (int i = 0; i < size - 1; i++)
            curr = curr->next;
        cout << curr->val;
        curr->next = n == 1 ? NULL : curr->next->next;
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
