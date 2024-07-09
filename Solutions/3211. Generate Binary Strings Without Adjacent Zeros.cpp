class Solution
{
public:
    vector<string> ans;
    void solve(string curr, int n)
    {
        if (curr.size() == n)
        {
            ans.push_back(curr);
            return;
        }
        if (curr.empty() || curr.back() == '1')
            solve(curr + '0', n);
        solve(curr + '1', n);
    }
    vector<string> validStrings(int n)
    {
        solve("", n);
        return ans;
    }
};