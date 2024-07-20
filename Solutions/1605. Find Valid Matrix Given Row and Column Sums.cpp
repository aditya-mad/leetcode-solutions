class Solution
{
public:
    vector<vector<int>> restoreMatrix(vector<int> &rowSum, vector<int> &colSum)
    {
        int m = rowSum.size(), n = colSum.size();
        vector<vector<int>> ans(m, vector<int>(n, 0));

        for (int i = 0, j = 0, temp; i < m && j < n;)
        {
            temp = ans[i][j] = min(rowSum[i], colSum[j]);
            if ((rowSum[i] -= temp) == 0)
                i++;
            if ((colSum[j] -= temp) == 0)
                j++;
        }

        return ans;
    }
};