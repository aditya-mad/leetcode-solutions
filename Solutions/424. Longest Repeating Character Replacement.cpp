class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        int ans = 0, i, memo[26] = {0}, maxele = 0;
        int ind = 0, size = s.size();
        for (i = 0; i < size; i++)
        {
            maxele = (++memo[s[i] - 'A'] > maxele) ? (memo[s[i] - 'A']) : (maxele);
            while (i - ind - maxele + 1 > k)
            {
                --memo[s[ind++] - 'A'];
                maxele = *max_element(memo, memo + 26);
            }
            ans = max(ans, i - ind + 1);
        }
        return ans;
    }
};