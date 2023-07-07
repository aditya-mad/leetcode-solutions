class Solution
{
public:
    int maxOperations(vector<int> &nums, int k)
    {
        int ans = 0, left = 0, right = nums.size() - 1;
        sort(nums.begin(), nums.end());
        while (left < right)
        {
            if (nums[left] + nums[right] == k)
            {
                right--;
                left++;
                ans++;
            }
            else if (nums[left] + nums[right] > k)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
        return ans;
    }
};