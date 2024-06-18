class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        long long left = 0, right = sqrt(c), curr;

        while (left <= right)
        {
            curr = left * left + right * right;
            if (curr == c)
                return true;
            else if (curr < c)
                left++;
            else
                right--;
        }

        return false;
    }
};