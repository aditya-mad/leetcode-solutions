class Solution
{
public:
    long long maxArrayValue(vector<int> &n)
    {
        long long ans = INT_MIN;
        int size = n.size();
        vector<long long int> nums(n.begin(), n.end());
        ans = nums[size - 1];
        for (int i = size - 2; i > -1; i--)
        {
            if (nums[i] <= nums[i + 1])
            {
                nums[i] += nums[i + 1];
            }
            ans = max(ans, (long long)nums[i]);
        }
        return ans;
    }
};