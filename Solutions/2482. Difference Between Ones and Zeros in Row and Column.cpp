class Solution
{
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>> &grid)
    {
        int row = grid.size(), col = grid[0].size();
        vector<int> memor(row), memoc(col);
        vector<vector<int>> ans(row, vector<int>(col, 0));

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                memor[i] += grid[i][j];
                memoc[j] += grid[i][j];
            }
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                ans[i][j] = memor[i] + memoc[j] - (row + col - memor[i] - memoc[j]);
            }
        }

        return ans;
    }
};