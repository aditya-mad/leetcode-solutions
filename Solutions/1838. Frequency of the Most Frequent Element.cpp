class Solution
{
public:
    int maxFrequency(vector<int> &nums, int k)
    {
        int ans = 0, ind = 0, size = nums.size();
        long long int sum = 0;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < size; i++)
        {
            sum += nums[i];
            while (sum + k < (long long)nums[i] * (i - ind + 1))
                sum -= nums[ind++];
            ans = max(ans, i - ind + 1);
        }
        return ans;
    }
};