class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {
        int size = nums.size() - 1, inc = 1, dec = 1;

        for (int i = 0; i < size; i++)
        {
            if (nums[i] < nums[i + 1])
                dec = 0;
            else if (nums[i] > nums[i + 1])
                inc = 0;
        }

        return inc || dec;
    }
};