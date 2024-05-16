class Solution
{
public:
    vector<vector<int>> memo;

    int solve(int n, int eggs, int floors)
    {
        if (memo[eggs][floors] != -1)
            return memo[eggs][floors];
        if (eggs == 1 || floors <= 1)
            return memo[eggs][floors] = floors;

        int ans = 1001;
        for (int i = 1; i <= n; i++)
        {
            ans = min(ans, 1 + max(solve(n, eggs - 1, i - 1), solve(n, eggs, floors - i)));
        }

        return memo[eggs][floors] = ans;
    }

    int twoEggDrop(int n)
    {
        memo = vector<vector<int>>(3, vector<int>(n + 1, -1));
        return solve(n, 2, n);
    }
};