class Solution
{
public:
    int sumOfUnique(vector<int> &nums)
    {
        unordered_map<int, int> val;
        int sum = 0;
        for (auto x : nums)
        {
            val[x]++;
        }

        for (auto x : nums)
        {
            if (val[x] == 1)
            {
                sum += x;
            }
        }
        return sum;
    }
};