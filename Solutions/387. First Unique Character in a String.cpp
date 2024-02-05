class Solution
{
public:
    int firstUniqChar(string s)
    {
        vector<int> memo(26);
        for (auto x : s)
            memo[x - 'a']++;
        for (int i = 0; i < s.size(); i++)
            if (memo[s[i] - 'a'] == 1)
                return i;
        return -1;
    }
};