class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> memo;

        for (auto x : s)
        {
            if (x == '(' || x == '{' || x == '[')
            {
                memo.push(x);
            }
            else if (memo.empty() || (x == ')' && memo.top() != '(') || (x == '}' && memo.top() != '{') || (x == ']' && memo.top() != '['))
            {
                return false;
            }
            else
            {
                memo.pop();
            }
        }

        return memo.size() == 0;
    }
};