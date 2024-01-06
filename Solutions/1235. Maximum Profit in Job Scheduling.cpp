class Solution
{
public:
    vector<vector<int>> all;

    int solve(vector<int> &memo, vector<int> &time, int i)
    {
        if (i >= memo.size())
            return 0;
        if (memo[i] != -1)
            return memo[i];
        int ans = solve(memo, time, i + 1);
        int ind = lower_bound(time.begin() + i, time.end(), all[i][1]) - time.begin();
        ans = max(ans, all[i][2] + solve(memo, time, ind));
        return memo[i] = ans;
    }

    int jobScheduling(vector<int> &startTime, vector<int> &endTime, vector<int> &profit)
    {
        int size = startTime.size();
        vector<int> memo(size, -1);
        for (int i = 0; i < size; i++)
            all.push_back({startTime[i], endTime[i], profit[i]});
        sort(all.begin(), all.end());
        sort(startTime.begin(), startTime.end());
        return solve(memo, startTime, 0);
    }
};