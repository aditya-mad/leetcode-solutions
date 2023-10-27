class Solution
{
public:
    int minimumSum(vector<int> &nums)
    {
        int size = nums.size(), ans = INT_MAX;
        vector<int> pref(nums.size()), suff(nums.size());
        pref[0] = INT_MAX;
        suff[size - 1] = INT_MAX;

        for (int i = 1; i < size; i++)
            pref[i] = min(pref[i - 1], nums[i - 1]);
        for (int i = size - 2; i > -1; i--)
            suff[i] = min(suff[i + 1], nums[i + 1]);

        for (int i = 1; i < size - 1; i++)
        {
            if (nums[i] > pref[i] && nums[i] > suff[i])
                ans = min(ans, nums[i] + pref[i] + suff[i]);
        }

        return ans == INT_MAX ? -1 : ans;
    }
};