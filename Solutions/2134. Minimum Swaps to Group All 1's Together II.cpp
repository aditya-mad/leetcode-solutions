class Solution
{
public:
    int minSwaps(vector<int> &nums)
    {
        int ans = 0, one = 0, size = nums.size(), curr = 0;

        for (auto x : nums)
            one += x;
        for (int i = 0; i < one; i++)
            curr += nums[i];

        ans = one - curr;

        for (int i = one; i < size + one; i++)
        {
            curr = curr - nums[i - one] + nums[i % size];
            ans = min(ans, one - curr);
        }
        return ans;
    }
};