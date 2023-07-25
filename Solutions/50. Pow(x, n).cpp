class Solution
{
public:
    double myPow(double x, int n)
    {
        double ans = 1;
        long num = abs((long)n);

        while (num > 0)
        {
            if (num % 2 == 1)
                ans *= x;
            x *= x;
            num /= 2;
        }
        return (n < 0) ? (1 / ans) : (ans);
    }
};