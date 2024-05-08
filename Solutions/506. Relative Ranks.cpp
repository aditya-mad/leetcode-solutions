class Solution
{
public:
    vector<string> findRelativeRanks(vector<int> &score)
    {
        priority_queue<vector<int>> memo;
        int size = score.size();
        vector<string> ans(size);
        for (int i = 0; i < size; i++)
            memo.push({score[i], i});

        int i = 0;
        while (!memo.empty())
        {
            auto x = memo.top();
            if (i == 0)
                ans[x[1]] = "Gold Medal";
            else if (i == 1)
                ans[x[1]] = "Silver Medal";
            else if (i == 2)
                ans[x[1]] = "Bronze Medal";
            else
                ans[x[1]] = to_string(i + 1);
            memo.pop();
            i++;
        }

        return ans;
    }
};