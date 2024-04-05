class Solution
{
public:
    string makeGood(string s)
    {
        int size = s.size();
        string ans;
        for (int i = 0; i < size; i++)
        {
            if (ans.size() == 0)
            {
                ans.push_back(s[i]);
                continue;
            }
            if (ans.back() - 32 == s[i] || ans.back() + 32 == s[i])
                ans.pop_back();
            else
                ans.push_back(s[i]);
        }

        return ans;
    }
};