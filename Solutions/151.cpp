class Solution
{
public:
    string reverseWords(string s)
    {
        string temp = "";
        vector<string> memo;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                if (temp.size() != 0)
                {
                    memo.push_back(temp);
                }
                temp = "";
            }
            else
            {
                temp += s[i];
                if (i == s.size() - 1)
                {
                    memo.push_back(temp);
                }
            }
        }
        temp = "";
        for (int i = memo.size() - 1; i > -1; i--)
        {
            temp += memo[i];
            temp += (i == 0) ? ("") : (" ");
        }
        return temp;
    }
};