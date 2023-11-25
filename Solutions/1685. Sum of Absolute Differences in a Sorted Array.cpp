class Solution
{
public:
    vector<int> getSumAbsoluteDifferences(vector<int> &nums)
    {
        int size = nums.size();
        vector<int> ans(size), pref(size, 0), suff(size, 0);

        for (int i = 1; i < size; i++)
            pref[i] = pref[i - 1] + nums[i - 1];
        for (int i = size - 2; i > -1; i--)
            suff[i] = suff[i + 1] + nums[i + 1];
        for (int i = 0; i < size; i++)
            ans[i] = nums[i] * i - pref[i] + suff[i] - nums[i] * (size - i - 1);

        return ans;
    }
};