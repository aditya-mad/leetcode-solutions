class Solution
{
public:
    bool buddyStrings(string s, string goal)
    {
        int size1 = s.size(), size2 = goal.size();

        if (size1 != size2)
            return false;

        if (s == goal)
        {
            set<char> check(s.begin(), s.end());
            return check.size() < size1;
        }
        vector<int> memo;

        for (int i = 0; i < size1; i++)
        {
            if (s[i] != goal[i])
                memo.push_back(i);
        }

        if (memo.size() != 2)
            return false;

        return (s[memo[0]] == goal[memo[1]] && s[memo[1]] == goal[memo[0]]);
    }
};