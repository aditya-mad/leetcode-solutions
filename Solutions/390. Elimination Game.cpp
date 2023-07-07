class Solution
{
public:
    int lastRemaining(int n)
    {
        bool right = false;
        int start = 1, total = n, steps = 1;

        while (total > 1)
        {
            if (!right || (total & 1))
            {
                start += steps;
            }
            steps <<= 1;
            total >>= 1;
            right = !right;
        }
        return start;
    }
};