class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        int ans = 0, size = heights.size(), temp;
        stack<int> memo;

        for (int i = 0; i <= size; i++)
        {
            while (!memo.empty() && (i == size || heights[memo.top()] >= heights[i]))
            {
                temp = heights[memo.top()];
                memo.pop();
                ans = max(ans, temp * (i - (memo.empty() ? 0 : memo.top() + 1)));
            }
            memo.push(i);
        }

        return ans;
    }
};