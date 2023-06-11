class Solution
{
public:
    string smallestString(string s)
    {
        string ans = "";
        long long int i = 0;
        char prev;
        bool change = false;

        for (i = 0; i < s.size(); i++)
        {
            if (s[i] != 'a')
            {
                change = true;
                break;
            }
            ans += s[i];
        }

        if (!change)
        {
            ans = "";
            for (i = 0; i < s.size(); i++)
            {
                if (i == s.size() - 1)
                {
                    ans += 'z';
                }
                else
                {
                    ans += s[i];
                }
            }
            return ans;
        }

        for (; i < s.size(); i++)
        {
            if (s[i] == 'a')
            {
                break;
            }
            else
            {
                char temp = s[i];
                temp = (int)temp - 1;
                ans += temp;
            }
        }

        for (; i < s.size(); i++)
        {
            ans += s[i];
        }
        return ans;
    }
};