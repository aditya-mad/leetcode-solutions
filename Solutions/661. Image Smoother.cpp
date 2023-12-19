class Solution
{
public:
    vector<vector<int>> imageSmoother(vector<vector<int>> &img)
    {
        int m = img.size(), n = img[0].size();
        vector<vector<int>> ans(m, vector<int>(n));

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int sum = 0, count = 0;
                for (int x = i - 1; x <= i + 1; x++)
                {
                    for (int y = j - 1; y <= j + 1; y++)
                    {
                        if (m > x && x >= 0 && y < n && y >= 0)
                        {
                            count++;
                            sum += img[x][y];
                        }
                    }
                }
                ans[i][j] = sum / count;
            }
        }

        return ans;
    }
};