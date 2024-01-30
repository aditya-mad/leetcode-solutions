class Solution
{
public:
    long solve(long num1, long num2, char op)
    {
        if (op == '+')
            return num1 + num2;
        if (op == '-')
            return num2 - num1;
        if (op == '*')
            return 1l * num1 * num2;
        return num2 / num1;
    }
    int evalRPN(vector<string> &tokens)
    {
        stack<long> memo;

        for (auto x : tokens)
        {
            if (x.size() == 1 && x[0] < 48)
            {
                long num1 = memo.top();
                memo.pop();
                long num2 = memo.top();
                memo.pop();
                char op = x[0];
                long res = solve(num1, num2, op);
                memo.push(res);
            }
            else
                memo.push(stol(x));
        }

        return memo.top();
    }
};