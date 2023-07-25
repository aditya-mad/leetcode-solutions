class Solution
{
public:
    bool isGood(vector<int> &nums)
    {
        int size = nums.size();
        int ans = size - 1;
        unordered_map<int, int> memo;
        for (auto x : nums)
            memo[x]++;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < size - 2; i++)
        {
            if (memo[nums[i]] != 1)
            {
                return false;
            }
        }

        return (memo[ans] == 2) ? (true) : (false);
    }
};