class Solution
{
public:
    int maxHeightOfTriangle(int red, int blue)
    {
        int ans = 0;
        int r = red, b = blue, i;
        for (i = 1; r >= 0 && b >= 0; i++)
        {
            if (i & 1)
                r -= i;
            else
                b -= i;
        }
        ans = i - (r < 0 || b < 0);
        r = red, b = blue;
        for (i = 1; r >= 0 && b >= 0; i++)
        {
            if (i & 1)
                b -= i;
            else
                r -= i;
        }
        ans = max(ans, i - (r < 0 || b < 0));
        return ans - 1;
    }
};