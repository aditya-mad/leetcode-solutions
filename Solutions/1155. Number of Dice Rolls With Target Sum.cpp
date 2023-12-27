const int mod = 1e9 + 7;

class Solution
{
public:
    int recur(int i, int n, int target, int sum, int k, vector<vector<int>> &dp)
    {
        if (i == n && target == sum)
            return 1;
        if (i >= n || target < sum)
            return 0;

        if (dp[i][sum] != -1)
        {
            return dp[i][sum];
        }
        int ans = 0;

        for (int face = 1; face <= k; face++)
        {
            if (sum + face <= target)
            {
                ans = (ans + recur(i + 1, n, target, sum + face, k, dp)) % mod;
            }
        }

        dp[i][sum] = ans % mod;
        return dp[i][sum];
    }

    int numRollsToTarget(int n, int k, int target)
    {
        vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
        return recur(0, n, target, 0, k, dp);
    }
};
