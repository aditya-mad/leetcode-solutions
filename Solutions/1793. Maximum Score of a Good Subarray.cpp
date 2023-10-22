class Solution
{
public:
    int maximumScore(vector<int> &nums, int k)
    {
        int ans = nums[k], currmin = nums[k];
        int right = k, left = k, size = nums.size();

        while (right < size - 1 || left > 0)
        {
            if (right == size - 1)
                left--;
            else if (left == 0)
                right++;
            else if (nums[right + 1] > nums[left - 1])
                right++;
            else
                left--;
            currmin = min({currmin, nums[left], nums[right]});
            ans = max(ans, currmin * (right - left + 1));
        }

        return ans;
    }
};