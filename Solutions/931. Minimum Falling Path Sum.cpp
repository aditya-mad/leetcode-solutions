class Solution
{
public:
    int solve(vector<vector<int>> &matrix, vector<vector<int>> &memo, int i, int j)
    {
        if (i >= matrix.size() || j >= matrix[0].size())
            return 100008;
        if (memo[i][j] != 100008)
            return memo[i][j];
        if (i + 1 == matrix.size())
            return memo[i][j] = matrix[i][j];

        int ans = 100008;
        ans = min(ans, matrix[i][j] + solve(matrix, memo, i + 1, j));
        ans = min(ans, matrix[i][j] + solve(matrix, memo, i + 1, j + 1));
        ans = min(ans, matrix[i][j] + solve(matrix, memo, i + 1, j - 1));

        return memo[i][j] = ans;
    }

    int minFallingPathSum(vector<vector<int>> &matrix)
    {
        int ans = INT_MAX;
        vector<vector<int>> memo(matrix.size(), vector<int>(matrix[0].size(), 100008));

        for (int i = 0; i < matrix.size(); i++)
        {
            ans = min(ans, solve(matrix, memo, 0, i));
        }

        return ans;
    }
};