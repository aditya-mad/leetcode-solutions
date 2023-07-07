class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int pairs = 0;
        unordered_map<int, int> val;
        for (auto x : nums)
        {
            val[x]++;
            if (val[x] > 1)
            {
                pairs += (val[x] - 1);
            }
        }
        return pairs;
    }
};