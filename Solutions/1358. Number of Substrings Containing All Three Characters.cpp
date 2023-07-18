class Solution
{
public:
    int numberOfSubstrings(string s)
    {
        int memo[3] = {0};
        int size = s.size(), ind = 0, ans = 0;

        for (int i = 0; i < size; i++)
        {
            memo[s[i] - 'a']++;
            while (memo[0] >= 1 && memo[1] >= 1 && memo[2] >= 1)
            {
                ans += size - i;
                --memo[s[ind++] - 'a'];
            }
        }
        return ans;
    }
};