class Solution
{
public:
    vector<int> relocateMarbles(vector<int> &nums, vector<int> &moveFrom, vector<int> &moveTo)
    {
        unordered_map<int, int> memo;
        int size = moveTo.size();

        for (auto x : nums)
            memo[x]++;

        for (int i = 0; i < size; i++)
        {
            if (!memo[moveFrom[i]] || moveTo[i] == moveFrom[i])
                continue;
            else
            {
                memo.erase(moveFrom[i]);
                memo[moveTo[i]] = 1;
            }
        }

        vector<int> ans;
        for (auto x : memo)
            ans.push_back(x.first);

        sort(ans.begin(), ans.end());
        return ans;
    }
};