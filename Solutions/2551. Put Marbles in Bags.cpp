class Solution
{
public:
    long long putMarbles(vector<int> &weights, int k)
    {
        long long max = 0, min = 0, size = weights.size();
        vector<int> memo(size - 1);

        for (int i = 0; i < size - 1; i++)
            memo[i] = weights[i] + weights[i + 1];

        sort(memo.begin(), memo.end());

        for (int i = 0; i < k - 1; i++)
        {
            min += memo[i];
            max += memo[size - i - 2];
        }

        return max - min;
    }
};