class Solution
{
public:
    vector<int> canSeePersonsCount(vector<int> &heights)
    {
        int size = heights.size();
        vector<int> ans(size, 0);
        stack<int> memo;
        for (int i = size - 1; i > -1; i--)
        {
            bool flag = false;
            while (!memo.empty() && memo.top() <= heights[i])
            {
                ans[i]++;
                memo.pop();
            }

            if (!memo.empty())
            {
                ans[i]++;
            }
            memo.push(heights[i]);
        }

        return ans;
    }
};