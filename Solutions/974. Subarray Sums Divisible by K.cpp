class Solution
{
public:
    int subarraysDivByK(vector<int> &nums, int k)
    {
        int ans = 0, sum = 0;
        unordered_map<int, int> memo;
        memo[0] = 1;
        for (auto x : nums)
        {
            sum += x;
            if (sum % k >= 0)
                ans += memo[sum % k]++;
            else
                ans += memo[sum % k + k]++;
        }

        return ans;
    }
};