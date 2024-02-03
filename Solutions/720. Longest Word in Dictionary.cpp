class Solution
{
public:
    string longestWord(vector<string> &words)
    {
        unordered_map<string, int> memo;
        string ans = "";

        for (auto x : words)
            memo[x]++;

        for (auto x : words)
        {
            bool done = true;
            string curr = "";
            for (auto y : x)
            {
                curr += y;
                if (memo[curr] == 0)
                    break;
                if (ans.size() == curr.size())
                    ans = min(ans, curr);
                ans = ans.size() < curr.size() ? curr : ans;
            }
        }

        return ans;
    }
};