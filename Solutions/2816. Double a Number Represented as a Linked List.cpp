class Solution
{
public:
    ListNode *doubleIt(ListNode *head)
    {
        vector<int> temp, nums;
        ListNode *ans = new ListNode();
        ListNode *ret = ans;
        while (head)
        {
            temp.push_back(head->val);
            head = head->next;
        }

        int carry = 0;

        for (int i = temp.size() - 1; i > -1; i--)
        {
            nums.push_back(((temp[i] * 2) + carry) % 10);
            if (temp[i] > 4)
                carry = 1;
            else
                carry = 0;
        }

        if (carry == 1)
            nums.push_back(carry);

        reverse(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
            ans->val = nums[i];
            if (i != nums.size() - 1)
            {
                ans->next = new ListNode();
                ans = ans->next;
            }
        }
        return ret;
    }
};