class Solution
{
public:
    int tribonacci(int n)
    {
        if (n == 0)
            return 0;
        if (n == 1 || n == 2)
            return 1;
        int prev1 = 0, prev2 = 1, ans = 1;
        int curr = 0;
        for (int i = 3; i <= n; i++)
        {
            curr = prev1 + ans + prev2;
            prev1 = prev2;
            prev2 = ans;
            ans = curr;
        }
        return ans;
    }
};