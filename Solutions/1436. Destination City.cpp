class Solution
{
public:
    string destCity(vector<vector<string>> &paths)
    {
        unordered_map<string, int> memo;

        for (auto x : paths)
            memo[x[0]]++;
        for (auto x : paths)
            if (memo[x[1]] == 0)
                return x[1];

        return "";
    }
};