class Solution
{
public:
    int minOperations(int n)
    {
        int ans;

        for (int i = 0; i < 17; i++)
        {
            if (__builtin_popcount(n + (1 << i)) < __builtin_popcount(n))
            {
                n += (1 << i);
                ans++;
            }
        }
        return ans + __builtin_popcount(n);
    }
};