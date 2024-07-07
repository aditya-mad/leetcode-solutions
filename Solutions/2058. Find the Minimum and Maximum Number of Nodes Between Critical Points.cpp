class Solution
{
public:
    vector<int> nodesBetweenCriticalPoints(ListNode *head)
    {
        int first = 0, curr = 0, temp = 0, mind = INT_MAX;
        if (!head)
            return {-1, -1};
        ListNode *prev = head;
        head = head->next;
        int i = 1;

        while (i++ && head->next)
        {
            if ((prev->val > head->val && head->val < head->next->val) || (prev->val < head->val && head->val > head->next->val))
            {
                if (!first)
                    first = i, temp = i;
                else
                    curr = i, mind = min(curr - temp, mind), temp = curr;
            }
            prev = prev->next, head = head->next;
        }
        return !first || mind == INT_MAX ? vector<int>{-1, -1} : vector<int>{mind, curr - first};
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