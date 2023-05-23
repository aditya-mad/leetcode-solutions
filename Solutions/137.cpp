class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        unordered_map<int, int> memo;
        for (auto x : nums)
        {
            memo[x]++;
        }

        for (auto x : memo)
        {
            if (x.second != 3)
                return x.first;
        }
        return 0;
    }
};