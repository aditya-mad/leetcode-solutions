class Solution
{
public:
    int minOperations(vector<string> &logs)
    {
        stack<string> memo;
        for (auto x : logs)
        {
            if (x[0] == '.' && x.size() == 2)
                continue;
            else if (x[0] == '.' && x.size() == 3 && !memo.empty())
                memo.pop();
            else if (x[0] != '.')
                memo.push(x);
        }

        return memo.size();
    }
};