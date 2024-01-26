class Solution
{
public:
    vector<vector<vector<int>>> memo;
    int mod = 1e9 + 7;
    int solve(int i, int j, int m, int n, int curr, int maxm)
    {
        if (curr > maxm)
            return 0;
        if (i == -1 || j == -1 || i == m || j == n)
            return 1;
        if (memo[i][j][curr] != -1)
            return memo[i][j][curr];
        int ans = (solve(i + 1, j, m, n, curr + 1, maxm) % mod);
        ans = (ans + solve(i, j + 1, m, n, curr + 1, maxm)) % mod;
        ans = (ans + solve(i, j - 1, m, n, curr + 1, maxm)) % mod;
        ans = (ans + solve(i - 1, j, m, n, curr + 1, maxm)) % mod;
        return memo[i][j][curr] = ans;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn)
    {
        memo.resize(m, vector<vector<int>>(n, vector<int>(maxMove + 1, -1)));
        return solve(startRow, startColumn, m, n, 0, maxMove);
    }
};