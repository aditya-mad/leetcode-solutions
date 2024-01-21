class Solution
{
public:
    int solve(vector<int> &nums, vector<int> &memo, int i)
    {
        if (i >= nums.size())
            return 0;
        if (memo[i] != -1)
            return memo[i];
        int ans = max(solve(nums, memo, i + 1), nums[i] + solve(nums, memo, i + 2));
        return memo[i] = ans;
    }

    int rob(vector<int> &nums)
    {
        vector<int> memo(nums.size(), -1);
        return solve(nums, memo, 0);
    }
};
