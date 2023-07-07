class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int ans = INT_MAX, ind = 0, i = 0, sum = 0;
        int size = nums.size();

        while (i < size)
        {
            sum += nums[i++];
            while (target <= sum)
            {
                ans = min(ans, i - ind);
                sum -= nums[ind++];
            }
        }
        return (ans == INT_MAX) ? (0) : (ans);
    }
};