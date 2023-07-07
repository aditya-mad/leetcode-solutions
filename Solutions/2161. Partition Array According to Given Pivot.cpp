class Solution
{
public:
    vector<int> pivotArray(vector<int> &nums, int pivot)
    {
        vector<int> ans(nums.size());
        int same = 0, high = nums.size(), low = 0;

        for (auto x : nums)
        {
            if (x > pivot)
            {
                high--;
            }
            else if (x < pivot)
            {
                same++;
            }
        }

        for (auto x : nums)
        {
            if (x > pivot)
            {
                ans[high++] = x;
            }
            else if (x < pivot)
            {
                ans[low++] = x;
            }
            else
            {
                ans[same++] = x;
            }
        }
        return ans;
    }
};