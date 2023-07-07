class Solution
{
public:
    vector<int> luckyNumbers(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        int row = matrix.size(), col = matrix[0].size();

        for (int i = 0; i < row; i++)
        {
            int temp = *min_element(matrix[i].begin(), matrix[i].end());
            int coli;
            for (int j = 0; j < col; j++)
            {
                if (matrix[i][j] == temp)
                {
                    coli = j;
                }
            }

            int tempm = 0;
            for (int j = 0; j < row; j++)
            {
                tempm = max(tempm, matrix[j][coli]);
            }

            if (tempm == temp)
            {
                ans.push_back(temp);
            }
        }
        return ans;
    }
};