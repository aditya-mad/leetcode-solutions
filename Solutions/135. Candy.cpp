class Solution
{
public:
    int candy(vector<int> &ratings)
    {
        int size = ratings.size(), ans = 0;
        vector<int> memo(size, 1);

        for (int i = 0; i < size - 1; i++)
        {
            if (ratings[i] > ratings[i + 1] && memo[i] <= memo[i + 1])
                memo[i] = memo[i + 1] + 1;
            if (ratings[i] < ratings[i + 1] && memo[i] >= memo[i + 1])
                memo[i + 1] = memo[i] + 1;
        }

        for (int i = size - 1; i > 0; i--)
        {
            if (ratings[i] > ratings[i - 1] && memo[i] <= memo[i - 1])
                memo[i] = memo[i - 1] + 1;
            if (ratings[i] < ratings[i - 1] && memo[i] >= memo[i - 1])
                memo[i - 1] = memo[i] + 1;
        }

        return accumulate(memo.begin(), memo.end(), 0);
    }
};