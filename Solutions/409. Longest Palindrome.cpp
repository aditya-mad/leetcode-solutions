class Solution
{
public:
    int longestPalindrome(string s)
    {
        int ans = 0;
        bool odd = 0;
        unordered_map<char, int> memo;

        for (auto x : s)
            memo[x]++;
        for (auto x : memo)
        {
            ans += x.second;
            if (x.second % 2 == 1)
                ans--, odd = true;
        }

        return ans + (odd ? 1 : 0);
    }
};