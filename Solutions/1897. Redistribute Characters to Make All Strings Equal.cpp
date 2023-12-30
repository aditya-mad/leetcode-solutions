class Solution
{
public:
    bool makeEqual(vector<string> &words)
    {
        unordered_map<char, int> memo;
        int size = words.size();
        for (auto word : words)
            for (auto x : word)
                memo[x]++;
        for (auto x : memo)
            if (x.second % size != 0)
                return false;
        return true;
    }
};