class Solution
{
public:
    int maxProductDifference(vector<int> &nums)
    {
        int size = nums.size();
        sort(nums.rbegin(), nums.rend());
        return nums[0] * nums[1] - nums[size - 1] * nums[size - 2];
    }
};