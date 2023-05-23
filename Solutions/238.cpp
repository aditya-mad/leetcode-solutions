class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int size = nums.size();
        vector<int> ans(size), pref(size), suff(size);
        suff[size - 1] = 1;
        pref[0] = 1;

        for (int i = 1; i < size; i++)
        {
            pref[i] = pref[i - 1] * nums[i - 1];
        }

        for (int i = size - 2; i > -1; i--)
        {
            suff[i] = suff[i + 1] * nums[i + 1];
        }

        for (int i = 0; i < size; i++)
        {
            ans[i] = suff[i] * pref[i];
        }
        return ans;
    }
};