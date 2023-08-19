class Solution
{
public:
    int maxSum(vector<int> &nums)
    {
        int ans = INT_MIN, size = nums.size();

        for (int i = 0; i < size - 1; i++)
        {
            string num1 = to_string(nums[i]);
            int max1 = *max_element(num1.begin(), num1.end()) - '0';

            for (int j = i + 1; j < size; j++)
            {
                string num2 = to_string(nums[j]);
                int max2 = *max_element(num2.begin(), num2.end()) - '0';
                if (max1 == max2)
                    ans = max(ans, nums[i] + nums[j]);
            }
        }

        return ans == INT_MIN ? -1 : ans;
    }
};