class Solution
{
public:
    ListNode *swapNodes(ListNode *head, int k)
    {
        ListNode *ans = head, *temp = head;
        ListNode *left = nullptr, *right = nullptr;
        int size = 0;

        while (temp)
        {
            temp = temp->next;
            size++;
        }

        int r = k, l = size - k + 1;
        temp = head;

        for (int i = 1; i <= size; i++)
        {
            if (i == r && temp != nullptr)
                right = temp;
            else if (i == l && temp != nullptr)
                left = temp;
            temp = temp->next;
        }

        if (right != nullptr && left != nullptr)
            swap(right->val, left->val);

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