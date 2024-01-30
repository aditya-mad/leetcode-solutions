class Solution
{
public:
    int countPrimes(int n)
    {

        if (n < 2)
            return 0;
        vector<bool> memo(n, true);
        memo[0] = memo[1] = false;

        for (int i = 2; i * i <= n; i++)
        {
            if (!memo[i])
                continue;
            for (int j = i * i; j < n; j += i)
                memo[j] = false;
        }

        return count(memo.begin(), memo.end(), true);
    }
};