class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int ans = 0, prev = 0;
        unordered_map<char, int> memo;

        for (int i = 0; i < s.size(); i++)
        {
            if (memo[s[i]] == 0)
            {
                memo[s[i]] = i + 1;
            }
            else if (memo[s[i]] != i + 1)
            {
                ans = max(ans, prev);
                prev = -1;
                int index = i + 1;
                i = memo[s[i]] - 1;
                memo.clear();
                memo[s[i]] = index;
            }
            prev++;
        }
        ans = max(ans, prev);
        return ans;
    }
};