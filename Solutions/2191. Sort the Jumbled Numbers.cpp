class Solution
{
public:
    vector<int> sortJumbled(vector<int> &mapping, vector<int> &nums)
    {
        int i = 0, pow = 1, num;
        unordered_map<int, int> memo;
        for (auto x : nums)
        {
            if (x == 0)
                memo[nums[i++]] = mapping[0];
            else
            {
                num = 0, pow = 1;
                while (x > 0)
                {
                    num += pow * mapping[x % 10];
                    x /= 10, pow *= 10;
                }
                memo[nums[i++]] = num;
            }
        }
        sort(nums.begin(), nums.end(), [&](int a, int b)
             { return memo[a] < memo[b]; });
        return nums;
    }
};