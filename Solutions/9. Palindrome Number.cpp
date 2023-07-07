class Solution
{
public:
    bool isPalindrome(int x)
    {
        int duplicate = x;
        long int rev_num = 0;
        if (x < 0)
        {
            return false;
        }
        else
        {

            while (x > 0)
            {
                rev_num = (rev_num * 10) + (x % 10);
                x = x / 10;
            }
            if (rev_num == duplicate)
                return true;
            else
                return false;
        }
    }
};