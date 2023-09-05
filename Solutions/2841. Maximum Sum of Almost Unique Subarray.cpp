class Solution
{
public:
    long long maxSum(vector<int> &nums, int m, int k)
    {
        long long ans = INT_MIN, sum = 0;
        unordered_map<int, int> memo;
        int i = 0, ind = 0;

        for (i = 0; i < k; i++)
        {
            sum += nums[i];
            memo[nums[i]]++;
        }

        if (memo.size() >= m)
            ans = max(ans, sum);

        for (ind = 0, i = k; i < nums.size(); i++, ind++)
        {
            sum += nums[i] - nums[ind];
            memo[nums[i]]++;
            if (--memo[nums[ind]] == 0)
                memo.erase(nums[ind]);
            if (memo.size() >= m)
                ans = max(ans, sum);
        }

        if (memo.size() >= m)
            ans = max(ans, sum);
        return ans == INT_MIN ? 0 : ans;
    }
};