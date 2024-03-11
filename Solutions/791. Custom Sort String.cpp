class Solution
{
public:
    string customSortString(string order, string s)
    {
        unordered_map<char, int> memo;
        string ans;
        for (auto x : s)
            memo[x]++;
        for (auto x : order)
        {
            for (int i = 0; i < memo[x]; i++)
                ans += x;
            memo.erase(x);
        }
        for (auto x : memo)
            for (int i = 0; i < x.second; i++)
                ans += x.first;
        return ans;
    }
};