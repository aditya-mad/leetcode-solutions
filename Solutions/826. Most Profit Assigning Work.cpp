class Solution
{
public:
    int maxProfitAssignment(vector<int> &difficulty, vector<int> &profit, vector<int> &worker)
    {
        int ans = 0, size = difficulty.size();
        priority_queue<vector<int>> memo;
        sort(worker.rbegin(), worker.rend());
        for (int i = 0; i < size; i++)
            memo.push({profit[i], difficulty[i]});

        for (int i = 0; i < worker.size(); i++)
        {
            while (!memo.empty() && memo.top()[1] > worker[i])
                memo.pop();
            if (memo.empty())
                break;
            ans += memo.top()[0];
        }

        return ans;
    }
};