class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int ans = INT_MIN, curr = 0;

        for (auto x : nums)
        {
            curr = max(x, curr + x);
            ans = max(ans, curr);
        }
        return ans;
    }
};