class Solution
{
public:
    int longestValidParentheses(string s)
    {
        int ans = 0, curr = s.size();
        stack<int> memo;
        for (int i = 0; i < s.size(); i++)
        {
            if (memo.empty() || s[i] == '(')
                memo.push(i);
            else if (s[memo.top()] == '(')
                memo.pop();
            else
                memo.push(i);
        }
        if (memo.empty())
            return s.size();
        while (!memo.empty())
        {
            ans = max(ans, curr - memo.top() - 1);
            curr = memo.top();
            memo.pop();
        }

        return max(ans, curr);
    }
};