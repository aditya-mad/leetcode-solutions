class Solution
{
public:
    int subarraysWithKDistinct(vector<int> &nums, int k)
    {
        int size = nums.size();

        auto count = [&](int ele) -> int
        {
            int ans = 0, ind = 0;
            unordered_map<int, int> memo;
            for (int i = 0; i < size; i++)
            {
                memo[nums[i]]++;
                while (memo.size() > ele && ind <= i)
                {
                    memo[nums[ind]]--;
                    if (memo[nums[ind]] == 0)
                        memo.erase(nums[ind]);
                    ind++;
                }
                ans += i - ind + 1;
            }
            return ans;
        };

        return count(k) - count(k - 1);
    }
};