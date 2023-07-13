class Solution
{
public:
    int findMaxLength(vector<int> &nums)
    {
        int size = nums.size(), ans = 0, pref = 0;
        unordered_map<int, int> memo;

        for (int i = 0; i < size; i++)
            if (nums[i] == 0)
                nums[i] = -1;

        for (int i = 0; i < size; i++)
        {
            pref += nums[i];
            if (pref == 0)
                ans = i + 1;
            else if (memo.find(pref) != memo.end())
                ans = max(ans, i - memo[pref]);
            else
                memo[pref] = i;
        }
        return ans;
    }
};