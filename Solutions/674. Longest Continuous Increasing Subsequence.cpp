class Solution
{
public:
    int findLengthOfLCIS(vector<int> &nums)
    {
        int len = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int seq = nums[i];
            int ind = 0;
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[j] > seq)
                {
                    seq = nums[j];
                    ind++;
                }
                else
                {
                    break;
                }
            }
            ind++;
            if (ind > len)
            {
                len = ind;
            }
        }
        return len;
    }
};