class Solution
{
public:
    vector<vector<vector<int>>> memo;
    int solve(vector<vector<int>> &grid, int ind, int j1, int j2)
    {
        if (j1 < 0 || j2 < 0 || j1 >= grid[0].size() || j2 >= grid[0].size() || ind == grid.size())
            return 0;
        if (memo[ind][j1][j2] != -1)
            return memo[ind][j1][j2];

        int ans = 0, curr = 0;
        ans += grid[ind][j1] + (j1 == j2 ? 0 : grid[ind][j2]);

        for (int i = j1 - 1; i <= j1 + 1; i++)
        {
            for (int j = j2 - 1; j <= j2 + 1; j++)
                curr = max(curr, solve(grid, ind + 1, i, j));
        }
        ans += curr;
        return memo[ind][j1][j2] = ans;
    }

    int cherryPickup(vector<vector<int>> &grid)
    {
        int m = grid.size(), n = grid[0].size();
        memo.resize(m, vector<vector<int>>(n, vector<int>(n, -1)));
        return solve(grid, 0, 0, n - 1);
    }
};