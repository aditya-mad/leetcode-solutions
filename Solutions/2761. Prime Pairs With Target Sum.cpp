class Solution
{
public:
    vector<vector<int>> findPrimePairs(int n)
    {
        vector<vector<int>> ans;
        vector<bool> primes(n + 1, true);
        primes[0] = false;
        primes[1] = false;

        for (int i = 2; i * i <= n; i++)
        {
            if (primes[i])
            {
                for (int j = i * i; j <= n; j += i)
                {
                    primes[j] = false;
                }
            }
        }

        for (int i = 2; i <= n / 2; i++)
        {
            int j = n - i;
            if (primes[i] && primes[j])
            {
                ans.push_back({i, j});
            }
        }

        return ans;
    }
};