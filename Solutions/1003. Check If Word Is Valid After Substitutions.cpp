class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> memo;

        for (auto x : s)
        {
            if (x == 'a' || x == 'b')
            {
                memo.push(x);
                continue;
            }
            if (memo.empty() || memo.top() != 'b')
                return false;
            memo.pop();
            if (memo.empty() || memo.top() != 'a')
                return false;
            memo.pop();
        }

        return memo.empty() && true;
    }
};