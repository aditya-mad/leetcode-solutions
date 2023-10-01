class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        set<int> memo;
        int ans = 0;
        for (int i = nums.size() - 1; i > -1; i--)
        {
            if (nums[i] <= k)
                memo.insert(nums[i]);
            ans++;
            if (memo.size() == k)
                break;
        }

        return ans;
    }
};