class Solution
{
public:
    int countCharacters(vector<string> &words, string chars)
    {
        unordered_map<char, int> memo;
        int ans = 0;

        for (auto x : chars)
            memo[x]++;
        for (auto word : words)
        {
            bool temp = true;
            unordered_map<char, int> curr;
            for (auto x : word)
                curr[x]++;
            for (auto x : word)
                if (memo[x] < curr[x])
                    temp = false;
            if (temp)
                ans += word.length();
        }

        return ans;
    }
};