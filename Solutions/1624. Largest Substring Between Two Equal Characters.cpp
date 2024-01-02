class Solution
{
public:
    int maxLengthBetweenEqualCharacters(string s)
    {
        int ans = -1, size = s.size();
        unordered_map<char, int> memo;

        for (int i = 0; i < size; i++)
        {
            if (memo.find(s[i]) != memo.end())
                ans = max(ans, i - memo[s[i]] - 1);
            else
                memo[s[i]] = i;
        }

        return ans;
    }
};