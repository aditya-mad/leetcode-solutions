class Solution
{
public:
    vector<int> findLonely(vector<int> &nums)
    {
        unordered_map<int, int> memo;
        vector<int> ans;

        for (auto x : nums)
            memo[x]++;
        for (auto x : nums)
        {
            if (memo[x] == 1 && memo[x - 1] == 0 && memo[x + 1] == 0)
                ans.push_back(x);
        }

        return ans;
    }
};