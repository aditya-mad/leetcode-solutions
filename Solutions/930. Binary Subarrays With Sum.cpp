class Solution
{
public:
    int numSubarraysWithSum(vector<int> &nums, int goal)
    {
        int size = nums.size();

        auto count = [&](int k) -> int
        {
            int ans = 0, ind = 0;
            long long int sum = 0;
            for (int i = 0; i < size; i++)
            {
                sum += nums[i];
                while (sum > k && ind <= i)
                    sum -= nums[ind++];
                ans += (i - ind + 1);
            }
            return ans;
        };

        return count(goal) - count(goal - 1);
    }
};