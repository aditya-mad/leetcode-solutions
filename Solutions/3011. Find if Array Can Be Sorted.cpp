class Solution
{
public:
    bool canSortArray(vector<int> &nums)
    {
        int size = nums.size();
        int curr = -1, maxele, i = 0;
        while (i < size)
        {
            maxele = nums[i];
            while (i < size && __builtin_popcount(nums[i]) == __builtin_popcount(maxele))
            {
                if (nums[i] < curr)
                    return false;
                maxele = max(maxele, nums[i]);
                i++;
            }
            curr = maxele;
        }

        return true;
    }
};