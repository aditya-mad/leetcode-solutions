class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        return n == 1 || (__builtin_popcount(n) == 1 && (30 - __builtin_clz(n)) % 2 == 1);
    }
};