class Solution
{
public:
    vector<vector<int>> findWinners(vector<vector<int>> &matches)
    {
        map<int, int> memo;
        vector<vector<int>> ans(2);

        for (auto x : matches)
            memo[x[0]], memo[x[1]]++;

        for (auto x : memo)
        {
            if (x.second == 0)
                ans[0].push_back(x.first);
            else if (x.second == 1)
                ans[1].push_back(x.first);
        }

        return ans;
    }
};
