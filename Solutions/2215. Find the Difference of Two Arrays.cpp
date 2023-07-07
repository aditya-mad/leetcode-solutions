class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> memo1, memo2;
        vector<vector<int>> ans(2);
        for (auto x : nums1)
        {
            memo1[x]++;
        }
        for (auto x : nums2)
        {
            memo2[x]++;
        }
        for (auto x : memo1)
        {
            if (memo2[x.first] == 0)
            {
                ans[0].push_back(x.first);
            }
        }
        for (auto x : memo2)
        {
            if (memo1[x.first] == 0)
            {
                ans[1].push_back(x.first);
            }
        }
        return ans;
    }
};