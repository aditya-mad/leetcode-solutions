class Solution
{
public:
    int equalSubstring(string s, string t, int maxCost)
    {
        int ans = 0;

        for (int i = 0, ind = 0; i < s.size(); i++)
        {
            maxCost -= abs(s[i] - t[i]);
            while (maxCost < 0 && ind <= i)
                maxCost += abs(s[ind] - t[ind++]);
            ans = max(ans, i - ind + 1);
        }

        return ans;
    }
};