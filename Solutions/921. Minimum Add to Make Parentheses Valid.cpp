class Solution
{
public:
    int minAddToMakeValid(string s)
    {
        stack<char> memo;
        for (auto x : s)
        {
            if (x == ')' && !memo.empty() && memo.top() == '(')
                memo.pop();
            else
                memo.push(x);
        }

        return memo.size();
    }
};