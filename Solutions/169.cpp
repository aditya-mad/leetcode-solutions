class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> memo;

        for (auto x : nums)
        {
            memo[x]++;
            if (memo[x] > nums.size() / 2)
                return x;
        }
        return 1;
    }
};