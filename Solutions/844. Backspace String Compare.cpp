class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        stack<char> one, two;

        for (auto x : s)
        {
            if (x == '#' && !one.empty())
                one.pop();
            else if (x != '#')
                one.push(x);
        }

        for (auto x : t)
        {
            if (x == '#' && !two.empty())
                two.pop();
            else if (x != '#')
                two.push(x);
        }

        return one == two;
    }
};