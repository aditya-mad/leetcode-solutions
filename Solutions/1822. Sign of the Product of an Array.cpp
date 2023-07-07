class Solution
{
public:
    int arraySign(vector<int> &nums)
    {
        int product = 0;
        for (auto x : nums)
        {
            if (x == 0)
            {
                return 0;
            }
            else if (x < 0)
            {
                product++;
            }
        }

        if (product % 2 == 0)
        {
            return 1;
        }
        return -1;
    }
};