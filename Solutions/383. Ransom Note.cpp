class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char, int> memo;

        for (auto x : magazine)
            memo[x]++;
        for (auto x : ransomNote)
            if (--memo[x] < 0)
                return false;
        return true;
    }
};