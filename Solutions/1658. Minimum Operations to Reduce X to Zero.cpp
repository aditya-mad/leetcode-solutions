class Solution
{
public:
    int minOperations(vector<int> &nums, int x)
    {
        int ans = INT_MIN, size = nums.size(), ind = 0;
        long long sum, curr = 0;

        sum = accumulate(nums.begin(), nums.end(), 0 - x);

        for (int i = 0; i < size; i++)
        {
            curr += nums[i];
            while (curr > sum && ind <= i)
                curr -= nums[ind++];
            if (curr == sum)
                ans = max(ans, i - ind + 1);
        }

        return (ans == INT_MIN) ? (-1) : (size - ans);
    }
};