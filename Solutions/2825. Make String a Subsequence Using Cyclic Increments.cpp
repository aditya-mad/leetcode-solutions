class Solution
{
public:
    bool canMakeSubsequence(string str1, string str2)
    {
        int size1 = str1.size(), size2 = str2.size();

        if (str2.size() > str1.size())
            return false;
        unordered_map<char, vector<int>> memo;

        for (int i = 0; i < size1; i++)
            memo[str1[i]].emplace_back(i);

        int curr = -1;

        for (auto x : str2)
        {
            char ele = x == 'a' ? 'z' : (char)(x - 1);
            if (memo[x].size() != 0 || memo[ele].size() != 0)
            {
                int one = INT_MAX;
                int two = INT_MAX;
                auto o = upper_bound(memo[ele].begin(), memo[ele].end(), curr);
                auto t = upper_bound(memo[x].begin(), memo[x].end(), curr);
                if (t != memo[x].end())
                    two = memo[x][t - memo[x].begin()];
                if (o != memo[ele].end())
                    one = memo[ele][o - memo[ele].begin()];
                curr = min(one, two);
                if (curr == INT_MAX)
                    return false;
            }
            else
                return false;
        }

        return curr == -1 ? false : true;
    }
};