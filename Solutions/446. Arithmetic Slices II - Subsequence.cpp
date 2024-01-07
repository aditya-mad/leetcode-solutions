class Solution
{
public:
    int numberOfArithmeticSlices(vector<int> &nums)
    {
        int size = nums.size(), ans = 0;
        vector<unordered_map<long long, int>> memo(size);

        for (int i = 1; i < size; i++)
        {
            for (int j = 0; j < i; j++)
            {
                long long diff = (long long)nums[i] - nums[j];
                memo[i][diff] += 1 + memo[j][diff];
                ans += memo[j][diff];
            }
        }

        return ans;
    }
};