class Solution
{
public:
    int kInversePairs(int n, int k)
    {
        int mod = 1e9 + 7;
        vector<int> memo(k + 1, 0);
        memo[0] = 1;

        for (int i = 1; i < n + 1; i++)
        {
            vector<int> temp(k + 1);
            int total = 0;

            for (int j = 0; j < k + 1; j++)
            {
                if (j >= i)
                    total = (total - memo[j - i] + mod) % mod;
                total = (total + memo[j]) % mod;
                temp[j] = total;
            }
            memo = temp;
        }

        return memo[k];
    }
};