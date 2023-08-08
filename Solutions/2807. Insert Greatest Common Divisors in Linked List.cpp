class Solution
{
public:
    ListNode *insertGreatestCommonDivisors(ListNode *head)
    {
        ListNode *ans = head;

        while (head->next != NULL)
        {
            ListNode *curr = new ListNode(__gcd(head->val, head->next->val));
            curr->next = head->next;
            head->next = curr;
            head = head->next->next;
        }

        return ans;
    }
};