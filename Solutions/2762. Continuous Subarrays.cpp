class Solution
{
public:
    long long continuousSubarrays(vector<int> &nums)
    {
        long long ans = 0;
        int low = 0, high = 0, ind = 0, size = nums.size();

        for (int i = 0; i < size; i++)
        {
            if (i == 0)
            {
                ans++;
                low = nums[i] - 2;
                high = nums[i] + 2;
            }
            else if (nums[i] >= low && nums[i] <= high)
            {
                low = max(low, nums[i] - 2);
                high = min(high, nums[i] + 2);
                ans += (i - ind + 1);
            }
            else
            {
                ind = i - 1;
                low = nums[i] - 2;
                high = nums[i] + 2;

                while (nums[ind] >= nums[i] - 2 && nums[ind] <= nums[i] + 2)
                {
                    low = max(low, nums[ind] - 2);
                    high = min(high, nums[ind--] + 2);
                }
                ans += (i - (++ind) + 1);
            }
        }

        return ans;
    }
};