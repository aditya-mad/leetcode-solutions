class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        int ans = 0;

        for (int i = 31; i > -1; i--)
        {
            if (n & (1 << 31 - i))
            {
                ans |= (1 << i);
            }
        }

        return ans;
    }
};