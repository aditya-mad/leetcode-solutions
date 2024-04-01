class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int ans = 0, i = s.size();
        while (--i > -1)
        {
            if (s[i] == ' ' && ans == 0)
                continue;
            else if (s[i] == ' ')
                break;
            ans++;
        }
        return ans;
    }
};