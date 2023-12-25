class Solution
{
public:
    vector<int> dp;

    int solve(string &s, int i)
    {
        if (i == s.size())
            return 1;
        if (dp[i] != 0)
            return dp[i];
        int ans = 0;
        if (s[i] != '0')
            ans += solve(s, i + 1);
        if (i + 1 < s.size() && (s[i] == '1' || s[i] == '2' && s[i + 1] <= '6'))
            ans += solve(s, i + 2);
        return dp[i] = ans;
    }

    int numDecodings(string s)
    {
        dp = vector(100, 0);
        return solve(s, 0);
    }
};