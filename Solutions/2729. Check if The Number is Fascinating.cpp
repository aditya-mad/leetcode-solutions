class Solution
{
public:
    int ans = 0;
    bool validate(int num)
    {
        while (num)
        {
            int rem = num % 10;
            if (rem == 0 || ((1 << rem) & ans) > 0)
            {
                return false;
            }
            ans |= (1 << rem);
            num /= 10;
        }
        return true;
    }

    bool isFascinating(int n)
    {
        return (validate(n) && validate(n * 2) && validate(n * 3));
    }
};