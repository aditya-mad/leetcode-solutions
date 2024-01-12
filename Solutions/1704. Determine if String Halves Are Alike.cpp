class Solution
{
public:
    bool halvesAreAlike(string s)
    {
        unordered_set<char> memo = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int count = 0;
        int size = s.size();
        for (int i = 0; i < s.size(); i++)
        {
            if (i < size / 2)
                count += (memo.find(s[i]) != memo.end());
            else
                count -= (memo.find(s[i]) != memo.end());
        }

        return count == 0;
    }
};