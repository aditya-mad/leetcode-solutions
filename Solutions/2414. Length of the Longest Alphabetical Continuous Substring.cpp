class Solution
{
public:
    int longestContinuousSubstring(string s)
    {
        int ind = s[0] - 'a', size = s.size(), ans = 0, len = 0;
        string memo = "abcdefghijklmnopqrstuvwxyz";

        for (int i = 0; i < size; i++)
        {
            if (s[i] == memo[ind++])
                len++;
            else
            {
                len = 1;
                ind = s[i] - 'a' + 1;
            }
            ans = max(ans, len);
        }
        return ans;
    }
};