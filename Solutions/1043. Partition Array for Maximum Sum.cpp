class Solution
{
public:
    int solve(int ind, vector<int> &nums, int k, vector<int> &memo)
    {
        if (ind >= nums.size())
            return 0;
        if (memo[ind] != -1)
            return memo[ind];
        int maxi = 0, ans = 0;
        for (int i = ind; i < min((int)nums.size(), ind + k); i++)
        {
            maxi = max(maxi, nums[i]);
            ans = max(ans, maxi * (i - ind + 1) + solve(i + 1, nums, k, memo));
        }
        memo[ind] = ans;
        return memo[ind];
    }

    int maxSumAfterPartitioning(vector<int> &arr, int k)
    {
        int n = arr.size();
        vector<int> memo(n, -1);
        return solve(0, arr, k, memo);
    }
};
