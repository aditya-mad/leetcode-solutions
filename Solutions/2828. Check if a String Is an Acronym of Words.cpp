class Solution
{
public:
    bool isAcronym(vector<string> &words, string s)
    {
        string ans = "";

        for (auto x : words)
            ans = ans + x[0];

        return ans == s;
    }
};