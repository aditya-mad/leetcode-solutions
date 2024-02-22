class Solution
{
public:
    int findJudge(int n, vector<vector<int>> &trust)
    {
        unordered_map<int, int> memo;
        for (auto x : trust)
            memo[x[1]]++, memo[x[0]]--;
        for (int i = 1; i <= n; i++)
            if (memo[i] == n - 1)
                return i;
        return -1;
    }
};