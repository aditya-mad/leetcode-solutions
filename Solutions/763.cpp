class Solution
{
public:
    vector<int> partitionLabels(string s)
    {
        vector<int> ans;
        unordered_map<char, int> memo;
        int size = s.size();
        for (int i = 0; i < size; i++)
        {
            memo[s[i]] = i;
        }

        for (int i = 0; i < size; i++)
        {
            int limit = memo[s[i]];
            for (int j = i; j < limit; j++)
            {
                limit = max(limit, memo[s[j]]);
            }
            ans.push_back(limit - i + 1);
            i = limit;
        }
        return ans;
    }
};