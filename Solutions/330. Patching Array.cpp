class Solution
{
public:
    int minPatches(vector<int> &nums, int n)
    {
        int ans = 0, size = nums.size();
        long long int sum = 1;
        for (int i = 0; sum <= n;)
        {
            if (i < size && nums[i] <= sum)
                sum += nums[i++];
            else
                sum += sum, ans++;
        }

        return ans;
    }
};