class Solution
{
public:
    int maximumGain(string s, int x, int y)
    {
        int ans = 0;
        auto solve = [&](char a, char b, int score)
        {
            stack<int> memo;
            for (auto x : s)
            {
                if (!memo.empty() && memo.top() == a && x == b)
                {
                    memo.pop();
                    ans += score;
                }
                else
                    memo.push(x);
            }
            string curr = "";
            while (!memo.empty())
            {
                curr += memo.top();
                memo.pop();
            }
            s = curr;
        };

        string match = x > y ? "ab" : "ba";
        solve(match[0], match[1], match == "ab" ? x : y);
        solve(match[0], match[1], match == "ab" ? y : x);
        return ans;
    }
};