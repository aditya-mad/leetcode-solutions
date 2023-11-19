class Solution
{
public:
    int reductionOperations(vector<int> &nums)
    {
        int size = nums.size(), ans = 0;

        sort(nums.begin(), nums.end());
        for (int i = 1, add = 0, prev = nums[0]; i < size; i++)
        {
            if (nums[i] != nums[i - 1])
            {
                prev = nums[i - 1];
                add++;
            }
            if (nums[i] > prev)
                ans += add;
        }

        return ans;
    }
};