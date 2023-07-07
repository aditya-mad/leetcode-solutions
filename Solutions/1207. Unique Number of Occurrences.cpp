class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        unordered_map<int, int> memo;
        unordered_set<int> rep;

        for (auto x : arr)
        {
            memo[x]++;
        }

        for (auto x : memo)
        {
            rep.insert(x.second);
        }

        if (rep.size() == memo.size())
        {
            return true;
        }
        return false;
    }
};