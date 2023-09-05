class Solution
{
public:
    bool checkStrings(string s1, string s2)
    {
        vector<char> oo, oe, to, te;
        int size = s1.size();

        for (int i = 0; i < size; i += 2)
        {
            oe.push_back(s1[i]);
            te.push_back(s2[i]);
        }
        for (int i = 1; i < size; i += 2)
        {
            oo.push_back(s1[i]);
            to.push_back(s2[i]);
        }

        sort(oo.begin(), oo.end());
        sort(oe.begin(), oe.end());
        sort(to.begin(), to.end());
        sort(te.begin(), te.end());

        return oo == to && oe == te ? true : false;
    }
};