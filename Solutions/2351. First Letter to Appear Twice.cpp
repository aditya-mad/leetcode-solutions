class Solution
{
public:
    char repeatedCharacter(string s)
    {
        unordered_map<char, int> val;
        char ret;
        for (auto x : s)
        {
            val[x]++;

            if (val[x] == 2)
            {
                ret = x;
                break;
            }
        }
        return ret;
    }
};