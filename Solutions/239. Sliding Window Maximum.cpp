class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        int size = nums.size();
        vector<int> ans;
        deque<int> memo;
        for (int i = 0; i < size; i++)
        {
            while (!memo.empty() && memo.back() < nums[i])
                memo.pop_back();
            memo.push_back(nums[i]);
            if (i < k - 1)
                continue;
            ans.push_back(memo.front());
            if (memo.front() == nums[i - k + 1])
                memo.pop_front();
        }

        return ans;
    }
};