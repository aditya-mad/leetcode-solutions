class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int index = 0;

        for (int x : nums)
        {
            if (x != 0)
            {
                nums[index++] = x;
            }
        }

        for (int i = index; i < nums.size(); i++)
        {
            nums[i] = 0;
        }
    }
};