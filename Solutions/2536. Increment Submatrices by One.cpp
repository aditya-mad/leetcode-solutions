class Solution
{
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>> &queries)
    {
        vector<vector<int>> ans(n, vector<int>(n, 0));

        for (auto x : queries)
        {
            for (int i = x[0]; i <= x[2]; i++)
            {
                ans[i][x[1]]++;
                if (x[3] + 1 >= n)
                    continue;
                ans[i][x[3] + 1]--;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n; j++)
                ans[i][j] = ans[i][j] + ans[i][j - 1];
        }

        return ans;
    }
};