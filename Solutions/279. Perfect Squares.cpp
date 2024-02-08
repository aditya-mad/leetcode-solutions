class Solution
{
public:
    vector<int> memo;
    int solve(int n)
    {
        if (n < 0)
            return INT_MAX;
        if (memo[n] != -1)
            return memo[n];
        int ans = INT_MAX;
        for (int i = 1; i * i <= n; i++)
            ans = min(ans, 1 + solve(n - i * i));
        return memo[n] = ans;
    }
    int numSquares(int n)
    {
        memo.resize(n + 1, -1);
        memo[0] = 1;
        for (int i = 1; i * i <= n; i++)
            memo[i * i] = 1;
        return solve(n);
    }
};