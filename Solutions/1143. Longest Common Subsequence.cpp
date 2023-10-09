class Solution
{
public:
    vector<vector<int>> dp;
    int solve(string &one, string &two, int i, int j)
    {
        if (i < 0 || j < 0)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        if (one[i] == two[j])
            return dp[i][j] = 1 + solve(one, two, i - 1, j - 1);
        return dp[i][j] = max(solve(one, two, i - 1, j), solve(one, two, i, j - 1));
    }
    int longestCommonSubsequence(string text1, string text2)
    {
        dp.resize(text1.size(), vector<int>(text2.size(), -1));
        return text1.size() == 0 || text2.size() == 0 ? 0 : solve(text1, text2, text1.size() - 1, text2.size() - 1);
    }
};