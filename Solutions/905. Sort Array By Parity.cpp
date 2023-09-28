class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        int right = 0, left = 0, size = nums.size();

        while (right < size && left < size)
        {
            while (left < size && nums[left] % 2 == 0)
                left++;
            while (right < size && nums[right] % 2 == 1)
                right++;
            if (right < size && left < size && right > left)
                swap(nums[right++], nums[left++]);
            else
                right++;
        }
        return nums;
    }
};