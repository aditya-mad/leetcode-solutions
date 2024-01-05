class Solution
{
public:
    int solve(vector<int> &nums, int i, int prev, int len, vector<vector<int>> &memo)
    {
        if (i == nums.size())
            return 0;
        if (memo[i][prev + 1] != -1)
            return memo[i][prev + 1];
        int ans = solve(nums, i + 1, prev, len, memo);
        if (prev == -1 || nums[i] > nums[prev])
            ans = max(ans, 1 + solve(nums, i + 1, i, len + 1, memo));
        return memo[i][prev + 1] = ans;
    }

    int lengthOfLIS(vector<int> &nums)
    {
        vector<vector<int>> memo(nums.size(), vector<int>(nums.size() + 1, -1));
        return solve(nums, 0, -1, 0, memo);
    }
};