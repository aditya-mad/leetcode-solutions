class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        unordered_map<char, int> jew;
        int ret = 0;

        for (auto x : jewels)
        {
            jew[x]++;
        }
        for (auto x : stones)
        {
            if (jew[x] > 0)
            {
                ret++;
            }
        }
        return ret;
    }
};