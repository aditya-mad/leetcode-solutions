class Solution
{
public:
    long long maxStrength(vector<int> &nums)
    {
        long long int ans = 0, temp = 1;
        if (nums.size() == 1)
        {
            return nums[0];
        }
        sort(nums.rbegin(), nums.rend());
        int index = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < 0)
            {
                index = i;
                break;
            }
        }

        if (index != -1)
        {
            reverse(nums.begin() + index, nums.end());
        }

        for (auto x : nums)
        {
            if (x == 0)
            {
                continue;
            }
            temp *= x;
            ans = max(ans, temp);
        }
        return ans;
    }
};