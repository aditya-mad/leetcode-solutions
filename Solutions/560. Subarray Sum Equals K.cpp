class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        unordered_map<long long int, int> memo;
        int ans = 0;
        long long int pref = 0;

        memo[0] = 1;
        for (auto x : nums)
        {
            pref += x;
            ans += memo[pref - k];
            memo[pref]++;
        }
        return ans;
    }
};