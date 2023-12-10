class Solution
{
public:
    long long countSubarrays(vector<int> &nums, int k)
    {
        long long int ans = 0;
        int size = nums.size(), maxele = *max_element(nums.begin(), nums.end()), count = 0;

        for (int i = 0, ind = 0; i < size; i++)
        {
            if (nums[i] == maxele)
                count++;
            while (count >= k)
            {
                ans += size - i;
                if (maxele == nums[ind++])
                    count--;
            }
        }

        return ans;
    }
};