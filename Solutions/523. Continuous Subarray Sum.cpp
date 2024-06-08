class Solution
{
public:
    bool checkSubarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> memo;
        int size = nums.size(), sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += nums[i];
            if ((sum % k == 0 && i > 0) || (memo.find(sum % k) != memo.end() && i - memo[sum % k] > 1))
                return true;
            if (memo.find(sum) == memo.end())
                memo[sum] = i;
            if (memo.find(sum % k) == memo.end())
                memo[sum % k] = i;
        }
        return false;
    }
};