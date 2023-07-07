class Solution
{
public:
    long long maximumOr(vector<int> &nums, int k)
    {
        int size = nums.size();
        vector<int> pref(size), suff(size);
        pref[0] = 0;
        for (int i = 1; i < size; i++)
        {
            pref[i] = pref[i - 1] | nums[i - 1];
        }
        suff[size - 1] = 0;

        for (int i = size - 2; i > -1; i--)
        {
            suff[i] = suff[i + 1] | nums[i + 1];
        }

        long long ans = 0;

        for (int i = 0; i < size; i++)
        {
            long long temp = nums[i];
            temp <<= k;
            temp = (pref[i] | temp | suff[i]);
            ans = (ans > temp) ? (ans) : (temp);
        }
        return ans;
    }
};