class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        int num = 0;
        for (auto x : nums)
        {
            num ^= x;
        }

        int ind = 0;
        for (int i = 0; i < 9; i++)
        {
            if ((num & (1 << i)) != 0)
            {
                ind = i;
                break;
            }
        }
        int temp = 0;
        for (auto x : nums)
        {
            if ((x & (1 << ind)) != 0)
            {
                temp ^= x;
            }
        }
        return {temp, num ^ temp};
    }
};