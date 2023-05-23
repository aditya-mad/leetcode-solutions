class Solution
{
public:
    bool areAlmostEqual(string s1, string s2)
    {
        if (s1.length() != s2.length())
        {
            return false;
        }
        else
        {
            unordered_map<char, int> one, two;
            int a = 0;
            for (int i = 0; i < s1.length(); i++)
            {
                one[s1[i]]++;
                two[s2[i]]++;
                if (s1[i] != s2[i])
                {
                    a++;
                }
            }
            if (a > 2)
            {
                return false;
            }
            for (auto x : one)
            {
                if (two[x.first] != x.second)
                {
                    return false;
                }
            }
            return true;
        }
    }
};