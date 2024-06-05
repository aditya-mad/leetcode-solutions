class Solution
{
public:
    vector<string> commonChars(vector<string> &words)
    {
        vector<int> memo(26, 101);
        vector<string> ans;

        for (auto word : words)
        {
            vector<int> temp(26, 0);
            for (auto x : word)
                temp[x - 'a']++;
            for (int i = 0; i < 26; i++)
                memo[i] = min(memo[i], temp[i]);
        }

        for (int i = 0; i < 26; i++)
            for (int j = 0; j < memo[i]; j++)
                ans.push_back(string(1, i + 'a'));

        return ans;
    }
};