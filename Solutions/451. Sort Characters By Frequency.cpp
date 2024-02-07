class Solution
{
public:
    string frequencySort(string s)
    {
        unordered_map<char, int> memo;
        for (auto x : s)
            memo[x]++;
        auto check = [&](const char a, const char b)
        {
            if (memo[a] == memo[b])
                return a > b;
            return memo[a] > memo[b];
        };

        sort(s.begin(), s.end(), check);
        return s;
    }
};