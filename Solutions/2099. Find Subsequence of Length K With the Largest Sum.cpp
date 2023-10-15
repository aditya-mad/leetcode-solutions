class Solution
{
public:
    vector<int> maxSubsequence(vector<int> &nums, int k)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> ind;
        priority_queue<pair<int, int>> temp;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
            temp.push({nums[i], i});

        for (int i = 0; i < k; i++)
        {
            ind.push({temp.top().second, temp.top().first});
            temp.pop();
        }

        while (!ind.empty())
        {
            ans.push_back(ind.top().second);
            ind.pop();
        }

        return ans;
    }
};