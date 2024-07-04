class Solution
{
public:
    int numComponents(ListNode *head, vector<int> &nums)
    {
        int ans = 0;
        unordered_set<int> memo(nums.begin(), nums.end());

        while (head)
        {
            if (memo.count(head->val) && (!head->next || !memo.count(head->next->val)))
                ans++;
            head = head->next;
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