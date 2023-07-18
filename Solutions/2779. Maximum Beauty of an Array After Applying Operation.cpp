class Solution
{
public:
    int maximumBeauty(vector<int> &nums, int k)
    {
        int ans = 0, size = nums.size(), ind = 0;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < size; i++)
        {
            while (nums[i] - nums[ind] > 2 * k)
                ind++;
            ans = max(ans, i - ind + 1);
        }
        return ans;
    }
};