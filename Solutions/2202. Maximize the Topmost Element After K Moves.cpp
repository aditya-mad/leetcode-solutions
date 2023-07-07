class Solution
{
public:
    int maximumTop(vector<int> &nums, int k)
    {
        if (k == 0)
        {
            return nums[0];
        }
        if (nums.size() == 1 && (k & 1))
        {
            return -1;
        }
        if (k == 1)
        {
            return nums[1];
        }
        if (nums.size() < k)
        {
            return *max_element(nums.begin(), nums.end());
        }
        if (nums.size() == k)
        {
            return *max_element(nums.begin(), nums.end() - 1);
        }
        return max(nums[k], *max_element(nums.begin(), nums.begin() + (k - 1)));
    }
};