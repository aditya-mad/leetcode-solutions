class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int index = 0;

        for (auto x : t)
        {
            if (x == s[index])
                index++;
        }

        return index == s.size();
    }
};