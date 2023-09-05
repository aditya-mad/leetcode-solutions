class Solution
{
public:
    bool canBeEqual(string s1, string s2)
    {
        vector<char> oo, oe, te, to;

        oo.push_back(s1[1]);
        oo.push_back(s1[3]);
        oe.push_back(s1[2]);
        oe.push_back(s1[0]);
        to.push_back(s2[1]);
        to.push_back(s2[3]);
        te.push_back(s2[2]);
        te.push_back(s2[0]);

        sort(oo.begin(), oo.end());
        sort(oe.begin(), oe.end());
        sort(to.begin(), to.end());
        sort(te.begin(), te.end());

        return oo == to && te == oe;
    }
};