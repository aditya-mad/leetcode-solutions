class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        int ans = 0;
        for (auto x : s)
            ans += x;
        for (auto x : t)
            ans -= x;

        return (char)abs(ans);
    }
};