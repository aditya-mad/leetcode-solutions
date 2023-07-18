class Solution
{
public:
    int numSubarrayProductLessThanK(vector<int> &nums, int k)
    {
        int ans = 0, ind = 0, size = nums.size();
        long long int prod = 1;
        for (int i = 0; i < size; i++)
        {
            prod *= nums[i];
            while (prod >= k && ind <= i)
                prod /= nums[ind++];
            ans += i - ind + 1;
        }
        return ans;
    }
};