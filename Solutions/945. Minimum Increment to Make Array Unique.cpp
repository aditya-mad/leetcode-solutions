class Solution
{
public:
    int minIncrementForUnique(vector<int> &nums)
    {
        int count = 0, size = nums.size(), ans = 0;
        sort(nums.begin(), nums.end());
        unordered_set<int> memo(nums.begin(), nums.end());

        for (int i = 1, curr = 0; i < size; i++)
        {
            if (nums[i] != nums[i - 1])
                continue;
            if (curr <= nums[i])
                curr = nums[i] + 1;
            while (memo.find(curr) != memo.end())
                curr++;
            memo.insert(curr);
            ans += (curr - nums[i]);
        }

        return ans;
    }
};