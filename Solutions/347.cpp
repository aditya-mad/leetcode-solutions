class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        vector<int> ans(k);
        unordered_map<int, int> memo;
        priority_queue<pair<int, int>> all;

        for (auto x : nums)
            memo[x]++;
        for (auto x : memo)
            all.push(make_pair(x.second, x.first));
        for (int i = 0; i < k; i++)
        {
            ans[i] = all.top().second;
            all.pop();
        }

        return ans;
    }
};