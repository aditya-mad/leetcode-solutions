class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        unordered_map<char, int> s1, s2;

        if (s.length() != t.length())
        {
            return false;
        }

        for (int i = 0; i < s.length(); i++)
        {
            s1[s[i]]++;
            s2[t[i]]++;
        }

        for (auto x : s1)
        {
            if (x.second != s2[x.first])
                return false;
        }
        return true;
    }
};