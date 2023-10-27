class Solution
{
public:
    vector<vector<int>> memo;
    int solve(int i, int j)
    {
        if (i < 0 || j < 0)
            return 0;
        else if (i == 0 && j == 0)
            return 1;
        else if (memo[i][j] != -1)
            return memo[i][j];
        else
            return memo[i][j] = solve(i - 1, j) + solve(i, j - 1);
    }

    int uniquePaths(int m, int n)
    {
        memo.resize(m, vector<int>(n, -1));
        return solve(m - 1, n - 1);
    }
};