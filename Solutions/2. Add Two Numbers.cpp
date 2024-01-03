class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *ans = new ListNode(0);
        ListNode *head = ans;

        while (l1 != NULL || l2 != NULL)
        {
            int num = l1 == NULL ? 0 : l1->val;
            num += l2 == NULL ? 0 : l2->val;

            ans->val += num;

            l1 = l1 == NULL ? NULL : l1->next;
            l2 = l2 == NULL ? NULL : l2->next;

            if (l1 == NULL && l2 == NULL && (ans->val) / 10 == 0)
            {
                ans->next = NULL;
                break;
            }

            ans->next = new ListNode(ans->val / 10);
            ans->val %= 10;
            ans = ans->next;
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