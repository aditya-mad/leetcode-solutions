class Solution
{
public:
    int maxCount(vector<int> &banned, int n, int maxSum)
    {
        int ans = 0, sum = 0;
        unordered_map<int, int> memo;

        for (auto x : banned)
            memo[x] = 1;

        for (int i = 1; i <= n && sum <= maxSum; i++)
        {
            if (memo[i] < 1)
            {
                sum += i;
                if (sum > maxSum)
                    break;
                ans++;
            }
        }
        return ans;
    }
};