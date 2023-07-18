class Solution
{
public:
    int maximumUniqueSubarray(vector<int> &nums)
    {
        unordered_map<int, int> memo;
        int size = nums.size(), ind = 0;
        int ans = 0;
        long long int sum = 0;
        for (int i = 0; i < size; i++)
        {
            memo[nums[i]]++;
            sum += nums[i];
            while (memo[nums[i]] > 1)
            {
                memo[nums[ind]]--;
                sum -= nums[ind++];
            }
            ans = (ans > sum) ? (ans) : (sum);
        }

        return ans;
    }
};