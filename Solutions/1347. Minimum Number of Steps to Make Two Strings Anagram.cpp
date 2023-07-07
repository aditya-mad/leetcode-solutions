class Solution
{
public:
    int minSteps(string s, string t)
    {
        int ans = s.size();
        unordered_map<char, int> memo;
        for (int i = 0; i < ans; i++)
        {
            memo[s[i]]++;
            memo[t[i]]--;
        }
        ans = 0;
        for (auto x : memo)
        {
            if (x.second < 0)
                ans += abs(x.second);
        }
        return ans;
    }
};