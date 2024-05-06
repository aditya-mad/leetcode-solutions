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
class Solution
{
public:
    ListNode *reverse(ListNode *head)
    {
        ListNode *curr = head, *prev = nullptr, *fwd;
        while (curr)
        {
            fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }
        return prev;
    }

    ListNode *removeNodes(ListNode *head)
    {
        head = reverse(head);
        ListNode *curr = head;
        while (curr)
        {
            ListNode *temp = curr->next;
            while (temp)
            {
                if (temp->val < curr->val)
                    temp = temp->next;
                else
                    break;
            }
            curr->next = temp;
            curr = curr->next;
        }
        head = reverse(head);
        return head;
    }
};