class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        int size = temperatures.size();
        vector<int> ans(size, 0);
        stack<pair<int, int>> memo;

        for (int i = size - 1; i >= 0; i--)
        {
            while (!memo.empty() && memo.top().first <= temperatures[i])
            {
                memo.pop();
            }

            if (!memo.empty())
            {
                ans[i] = memo.top().second - i;
            }

            memo.push(make_pair(temperatures[i], i));
        }

        return ans;
    }
};