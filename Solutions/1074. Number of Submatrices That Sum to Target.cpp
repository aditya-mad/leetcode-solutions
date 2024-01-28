class Solution
{
public:
    int numSubmatrixSumTarget(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size(), n = matrix[0].size(), ans = 0;

        for (int i = 0; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                matrix[i][j] += matrix[i][j - 1];
            }
        }

        for (int cSt = 0; cSt < n; cSt++)
        {
            for (int cEnd = cSt; cEnd < n; cEnd++)
            {
                map<int, int> mp;
                int sum = 0;
                for (int r = 0; r < m; r++)
                {
                    sum += matrix[r][cEnd] - (cSt > 0 ? matrix[r][cSt - 1] : 0);
                    ans += mp[sum - target];
                    if (sum == target)
                        ans++;
                    mp[sum]++;
                }
            }
        }

        return ans;
    }
};
