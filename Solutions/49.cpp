class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> memo;

        for (auto x : strs)
        {
            string sortstr = x;
            sort(sortstr.begin(), sortstr.end());
            memo[sortstr].push_back(x);
        }

        for (auto x : memo)
            ans.push_back(x.second);
        return ans;
    }
};