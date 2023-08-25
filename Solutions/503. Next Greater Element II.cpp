class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &nums)
    {
        int size = nums.size();
        vector<int> ans(size);
        stack<int> memo;

        for (int i = (2 * size) - 1; i > -1; i--)
        {
            while (!memo.empty() && nums[memo.top() % size] <= nums[i % size])
                memo.pop();
            if (!memo.empty())
                ans[i % size] = nums[memo.top() % size];
            else
                ans[i % size] = -1;
            memo.push(i);
        }

        return ans;
    }
};