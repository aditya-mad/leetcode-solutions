class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int last = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        last--;
        if (last < 0 || nums[last] != target)
        {
            return {-1, -1};
        }
        int first = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        return {first, last};
    }
};