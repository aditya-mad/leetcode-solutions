class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string> &words)
    {

        unordered_map<char, int> memo;
        int ans = words.size();
        for (auto x : allowed)
        {
            memo[x]++;
        }

        for (auto x : words)
        {
            for (auto y : x)
            {
                if (memo[y] > 0)
                {
                    continue;
                }
                else
                {
                    ans--;
                    break;
                }
            }
        }

        return ans;
    }
};