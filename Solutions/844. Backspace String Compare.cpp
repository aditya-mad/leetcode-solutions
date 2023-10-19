class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {

        while (s[0] == '#')
            s.erase(s.begin());
        while (t[0] == '#')
            t.erase(t.begin());

        int one = 0;
        for (auto x : s)
            if (x == '#')
                one++;

        while (one--)
        {
            for (int i = 0; i < one.size();)
        }
    }
};