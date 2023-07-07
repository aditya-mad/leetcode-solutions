class Solution
{
public:
    vector<vector<int>> findMatrix(vector<int> &nums)
    {
        unordered_map<int, int> memo;
        int maxrows = 0;

        for (auto x : nums)
        {
            memo[x]++;
            maxrows = max(maxrows, memo[x]);
        }

        vector<vector<int>> ans(maxrows);
        int index = 0;

        while (!memo.empty())
        {
            vector<int> keys;

            for (auto &x : memo)
            {
                ans[index].push_back(x.first);
                x.second--;

                if (x.second == 0)
                {
                    keys.push_back(x.first);
                }
            }

            for (int key : keys)
            {
                memo.erase(key);
            }

            index++;
        }

        return ans;
    }
};