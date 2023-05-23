class Solution
{
public:
    int countKDifference(vector<int> &nums, int k)
    {
        unordered_map<int, int> memo;
        int ans = 0;

        for (auto x : nums)
        {
            ans += memo[x - k] + memo[x + k];
            memo[x]++;
        }
        return ans;
    }
};