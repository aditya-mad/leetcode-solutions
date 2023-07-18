class Solution
{
public:
    long long countGood(vector<int> &nums, int k)
    {
        long long int ans = 0;
        unordered_map<int, int> memo;
        int size = nums.size(), ind = 0, pairs = 0;

        for (int i = 0; i < size; i++)
        {
            pairs += memo[nums[i]]++;
            while (pairs >= k && ind <= i)
            {
                memo[nums[ind]]--;
                pairs -= memo[nums[ind++]];
                ans += size - i;
            }
        }

        return ans;
    }
};
