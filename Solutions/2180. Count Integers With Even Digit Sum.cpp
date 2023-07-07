class Solution
{
public:
    int countEven(int num)
    {
        int no_int;

        for (int i = num; i > 0; i--)
        {
            int temp = i, sum = 0;
            while (temp != 0)
            {
                sum = sum + temp % 10;
                temp = temp / 10;
            }
            if (sum % 2 == 0)
                no_int++;
        }
        return no_int;
    }
};