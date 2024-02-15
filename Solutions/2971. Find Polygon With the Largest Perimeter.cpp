class Solution
{
public:
    long long largestPerimeter(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        long long int sum = nums[0] + nums[1], ans = -1;
        int size = nums.size();

        for (int i = 2; i < size; i++)
        {
            if (sum > nums[i])
                ans = sum + nums[i];
            sum += nums[i];
        }

        return ans;
    }
};