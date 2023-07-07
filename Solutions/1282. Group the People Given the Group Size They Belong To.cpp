class Solution
{
public:
    vector<vector<int>> groupThePeople(vector<int> &groupSizes)
    {
        vector<vector<int>> ans;
        unordered_map<int, vector<int>> memo;
        int size = groupSizes.size();
        for (int i = 0; i < size; i++)
        {
            if (memo[groupSizes[i]].size() == groupSizes[i])
            {
                ans.push_back(memo[groupSizes[i]]);
                memo.erase(groupSizes[i]);
            }
            memo[groupSizes[i]].push_back(i);
        }

        for (auto x : memo)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};