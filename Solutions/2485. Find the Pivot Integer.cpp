class Solution
{
public:
    int pivotInteger(int n)
    {
        double ans = sqrt((n * (n + 1)) / 2);
        return ceil(ans) == ans ? ans : -1;
    }
};