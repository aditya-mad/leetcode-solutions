class Solution
{
public:
    vector<string> findRepeatedDnaSequences(string s)
    {
        vector<string> ans;
        unordered_map<string, int> memo;
        int size = s.size();

        for (int i = 0; i < size - 9; i++)
            memo[s.substr(i, 10)]++;
        for (auto x : memo)
            if (x.second > 1)
                ans.push_back(x.first);
        return ans;
    }
};