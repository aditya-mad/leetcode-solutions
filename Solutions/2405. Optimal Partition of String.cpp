class Solution
{
public:
    int partitionString(string s)
    {
        int ans = 1;
        set<char> memo;
        for (auto x : s)
        {
            if (memo.find(x) != memo.end())
            {
                ans++;
                memo.erase(memo.begin(), memo.end());
            }
            memo.insert(x);
        }
        return ans;
    }
};