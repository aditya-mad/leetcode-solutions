class Solution
{
public:
    vector<int> maxSubsequence(vector<int> &nums, int k)
    {
        vector<pair<int, int>> temp;
        vector<int> ans;

        auto check = [&](const pair<int, int> &a, const pair<int, int> &b)
        {
            return a.second < b.second;
        };

        for (int i = 0; i < nums.size(); i++)
            temp.push_back({nums[i], i});
        sort(temp.rbegin(), temp.rend());
        sort(temp.begin(), temp.begin() + k, check);

        for (int i = 0; i < k; i++)
            ans.push_back(temp[i].first);

        return ans;
    }
};