class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> memo;
        vector<int> ans;
        for (auto x : nums1)
            if (memo[x] == 0)
                memo[x]++;
        for (auto x : nums2)
            if (memo[x] == 1)
            {
                ans.push_back(x);
                memo[x]++;
            }
        return ans;
    }
};