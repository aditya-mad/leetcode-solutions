class Solution
{
public:
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>> &grid)
    {
        vector<vector<int>> ans;

        for (int i = 0; i < grid.size(); i++)
        {
            vector<int> temp;
            for (int j = 0; j < grid[0].size(); j++)
            {
                int left = 0, right = 0;
                set<int> memo1, memo2;
                int ii = i, jj = j;
                while (true)
                {
                    ii--;
                    jj--;
                    if (ii < 0 || jj < 0)
                    {
                        left = memo1.size();
                        break;
                    }
                    else
                    {
                        memo1.insert(grid[ii][jj]);
                    }
                }
                ii = i;
                jj = j;
                while (true)
                {
                    ii++;
                    jj++;
                    if (ii >= grid.size() || jj >= grid[0].size())
                    {
                        right = memo2.size();
                        break;
                    }
                    else
                    {
                        memo2.insert(grid[ii][jj]);
                    }
                }
                temp.push_back(abs(left - right));
            }
            ans.push_back(temp);
        }
        return ans;
    }
};