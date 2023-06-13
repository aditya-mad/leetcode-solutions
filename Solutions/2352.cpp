class Solution
{
public:
    int equalPairs(vector<vector<int>> &grid)
    {
        int ans = 0;

        for (auto x : grid)
        {
            for (int i = 0; i < grid.size(); i++)
            {
                bool flag = true;
                for (int j = 0; j < grid.size(); j++)
                {
                    if (grid[j][i] != x[j])
                    {
                        flag = false;
                        break;
                    }
                }

                if (flag)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};