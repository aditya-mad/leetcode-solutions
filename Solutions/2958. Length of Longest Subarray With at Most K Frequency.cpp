class Solution
{
public:
    int maxSubarrayLength(vector<int> &nums, int k)
    {
        int ans = 0, size = nums.size();
        unordered_map<int, int> memo;

        for (int i = 0, ind = 0; i < size; i++)
        {
            memo[nums[i]]++;
            while (ind <= i && memo[nums[i]] > k)
                memo[nums[ind++]]--;
            ans = max(ans, i - ind + 1);
        }

        return ans;
    }
};