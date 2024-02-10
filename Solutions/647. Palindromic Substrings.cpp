class Solution
{
public:
    int countSubstrings(string s)
    {
        int size = s.size(), ans = 0;
        vector<vector<int>> memo(size, vector<int>(size, -1));

        for (int i = size - 1; i > -1; i--)
        {
            for (int j = i; j < size; j++)
            {
                if (i == j)
                    memo[i][j] = 1;
                else if (i + 1 == j)
                    memo[i][j] = s[i] == s[j] ? 1 : 0;
                else
                    memo[i][j] = s[i] == s[j] ? memo[i + 1][j - 1] : 0;
                ans += memo[i][j];
            }
        }

        return ans;
    }
};