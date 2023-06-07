class Solution
{
public:
    int semiOrderedPermutation(vector<int> &nums)
    {
        int minindex, maxindex;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                minindex = i;
            }
            if (nums[i] == nums.size())
            {
                maxindex = i;
            }
        }

        if (maxindex < minindex)
        {
            return ((nums.size() - maxindex - 2) + minindex);
        }
        return (minindex + (nums.size() - maxindex - 1));
    }
};