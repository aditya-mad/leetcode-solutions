class Solution
{
public:
    int longestNiceSubarray(vector<int> &nums)
    {
        int ans = 0, memo = 0, ind = 0;
        for (int i = 0; i < size; i++)
        {
            while ((memo & nums[i]) != 0)
                memo ^= nums[ind++];
            memo |= nums[i];
            ans = max(ans, i - ind + 1);
        }
        return ans;
    }
};