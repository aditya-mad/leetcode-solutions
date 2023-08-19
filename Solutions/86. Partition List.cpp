class Solution
{
public:
    ListNode *partition(ListNode *head, int x)
    {
        ListNode *small = nullptr;
        ListNode *big = nullptr;
        ListNode *anssi = nullptr;
        ListNode *ansbi = nullptr;
        while (head)
        {
            if (head->val < x)
            {
                if (small == nullptr)
                {
                    small = new ListNode(head->val);
                    anssi = small;
                }
                else
                {
                    small->next = new ListNode(head->val);
                    small = small->next;
                }
            }
            else
            {
                if (big == nullptr)
                {
                    big = new ListNode(head->val);
                    ansbi = big;
                }
                else
                {
                    big->next = new ListNode(head->val);
                    big = big->next;
                }
            }
            head = head->next;
        }
        if (anssi == nullptr)
            return ansbi;
        small->next = ansbi;
        return anssi;
    }
};