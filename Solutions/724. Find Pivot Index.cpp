class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int size = nums.size();
        vector<int> pref(size), suff(size);
        pref[0] = 0;
        suff[size - 1] = 0;

        for (int i = 1; i < size; i++)
        {
            pref[i] = nums[i - 1] + pref[i - 1];
        }
        for (int i = size - 2; i > -1; i--)
        {
            suff[i] = suff[i + 1] + nums[i + 1];
        }

        for (int i = 0; i < size; i++)
        {
            if (suff[i] == pref[i])
                return i;
        }
        return -1;
    }
};