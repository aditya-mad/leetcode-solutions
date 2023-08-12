class Solution
{
public:
    int maximumPopulation(vector<vector<int>> &logs)
    {
        int ans = 0;
        vector<int> memo(2051, 0);

        for (vector<int> &x : logs)
        {
            memo[x[0]]++;
            memo[x[1]]--;
        }

        for (int i = 1950; i < 2050; i++)
        {
            memo[i] += memo[i - 1];
            ans = (memo[ans] >= memo[i]) ? (ans) : (i);
        }

        return ans;
    }
};