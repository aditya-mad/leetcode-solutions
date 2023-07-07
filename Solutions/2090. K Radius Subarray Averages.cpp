class Solution
{
public:
    vector<int> getAverages(vector<int> &nums, int k)
    {
        int size = nums.size();
        long long int sum = 0;
        vector<int> ans(size, -1);

        if (size < (2 * k) + 1)
        {
            return ans;
        }

        for (int i = 0; i < (2 * k) + 1; i++)
        {
            sum += nums[i];
        }

        for (int i = k; i < size - k; i++)
        {
            ans[i] = sum / ((2 * k) + 1);
            if (i != size - k - 1)
            {
                sum -= nums[i - k];
                sum += nums[i + k + 1];
            }
        }
        return ans;
    }
};