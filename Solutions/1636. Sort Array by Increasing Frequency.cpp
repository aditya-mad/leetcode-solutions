class Solution
{
public:
    vector<int> frequencySort(vector<int> &nums)
    {
        unordered_map<int, int> memo;
        for (auto x : nums)
            memo[x]++;
        sort(nums.begin(), nums.end(), [&](const int &a, const int &b)
             { return memo[a] == memo[b] ? a > b : memo[a] < memo[b]; });
        return nums;
    }
};