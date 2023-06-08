class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int ans = 0, row = grid.size() - 1, col = 0;

        while (col < grid[0].size() && row > -1)
        {
            if (grid[row][col] < 0)
            {
                ans += grid[0].size() - col;
                row--;
            }
            else
            {
                col++;
            }
        }

        return ans;
    }
};