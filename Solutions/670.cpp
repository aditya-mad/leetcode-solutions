class Solution
{
public:
    int maximumSwap(int num)
    {
        vector<int> memo;
        int ans = num;
        while (num != 0)
        {
            memo.push_back(num % 10);
            num /= 10;
        }

        reverse(memo.begin(), memo.end());

        int left = memo.size() - 1;
        int change1 = memo.size() - 1, change2 = -1;

        for (int i = memo.size() - 1; i > -1; i--)
        {
            if (memo[i] > memo[left])
            {
                left = i;
            }
            else if (memo[i] < memo[left])
            {
                change1 = left;
                change2 = i;
            }
        }

        if (change2 == -1)
        {
            return ans;
        }
        swap(memo[change1], memo[change2]);

        num = 0;

        for (int i = 0; i < memo.size(); i++)
        {
            num *= 10;
            num += memo[i];
        }
        return num;
    }
};