class Solution
{
public:
    string reverseWords(string s)
    {
        string ans = "", temp = "";

        for (int i = s.size() - 1; i > -1; i--)
        {
            if (s[i] == ' ')
            {
                ans = " " + temp + ans;
                temp = "";
            }
            else
                temp += s[i];
        }
        ans = temp + ans;
        return ans;
    }
};