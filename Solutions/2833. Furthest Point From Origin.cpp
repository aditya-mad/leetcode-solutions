class Solution
{
public:
    int furthestDistanceFromOrigin(string moves)
    {
        int left = 0, right = 0, under = 0;

        for (auto x : moves)
        {
            if (x == 'L')
                left++;
            else if (x == 'R')
                right++;
            else
                under++;
        }

        return max(left - right, right - left) + under;
    }
};