class Solution
{
public:
    int minFlips(int a, int b, int c)
    {
        int num = (a | b), ans = 0;
        while (num != 0 || c != 0)
        {
            if ((num & 1) == (c & 1))
            {
                num >>= 1;
                c >>= 1;
                a >>= 1;
                b >>= 1;
            }
            else if (((c & 1) == 1))
            {
                ans++;
                num >>= 1;
                c >>= 1;
                a >>= 1;
                b >>= 1;
            }
            else
            {
                if (a & 1)
                {
                    ans++;
                }
                if (b & 1)
                {
                    ans++;
                }
                num >>= 1;
                c >>= 1;
                a >>= 1;
                b >>= 1;
            }
        }
        return ans;
    }
};