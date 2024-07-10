class Solution
{
public:
    int minOperations(vector<string> &logs)
    {
        int memo = 0;
        for (auto x : logs)
        {
            if (x[0] == '.' && x.size() == 2)
                continue;
            else if (x[0] == '.' && x.size() == 3 && memo > 0)
                memo--;
            else if (x[0] != '.')
                memo++;
        }
        return memo;
    }
};