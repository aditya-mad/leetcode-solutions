class Solution
{
public:
    int minPairSum(vector<int> &nums)
    {
        int ans = 0, size = nums.size();
        int left = 0, right = size - 1;

        sort(nums.begin(), nums.end());
        while (left < right)
            ans = max(ans, nums[left++] + nums[right--]);
        return ans;
    }
};