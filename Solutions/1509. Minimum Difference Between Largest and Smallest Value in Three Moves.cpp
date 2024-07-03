class Solution
{
public:
    int minDifference(vector<int> &nums)
    {
        int size = nums.size(), ans = INT_MAX, moves = 3;
        if (size <= moves + 1)
            return 0;
        sort(nums.begin(), nums.end());
        for (int i = 0, j = size - 4; i <= moves; i++, j++)
            ans = min(ans, nums[j] - nums[i]);
        return ans;
    }
};