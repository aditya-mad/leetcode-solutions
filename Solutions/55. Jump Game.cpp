class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int last = nums.size() - 1;

        for (int i = nums.size() - 2; i > -1; i--)
        {
            if (last <= nums[i] + i)
            {
                last = i;
            }
        }
        return last == 0;
    }
};