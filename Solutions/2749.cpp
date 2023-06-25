class Solution
{
public:
    int makeTheIntegerZero(int num1, int num2)
    {

        if (num1 >= num2)
        {
            for (int i = 0; i <= 32; i++)
            {
                long long int difference = num1 - 1LL * num2 * i;
                int mask = __builtin_popcountll(difference);
                if (difference < 0)
                {
                    return -1;
                }
                if (i >= mask && i <= difference)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};