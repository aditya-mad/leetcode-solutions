class Solution
{
public:
    void check(vector<int> &nums, int index, int size, int &ans, int temp)
    {
        ans += temp;
        for (int i = index; i < size; i++)
        {
            temp ^= nums[i];
            check(nums, i + 1, size, ans, temp);
            temp ^= nums[i];
        }
    }

    int subsetXORSum(vector<int> &nums)
    {
        int ans = 0;
        check(nums, 0, nums.size(), ans, 0);
        return ans;
    }
};