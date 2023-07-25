class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int right = nums.size(), left = 1, mid;

        if (right == 1 || nums[0] > nums[1])
            return 0;
        else if (nums[right - 1] > nums[right - 2])
            return right - 1;
        right -= 2;

        while (left <= right)
        {
            mid = left + (right - left) / 2;
            if (nums[mid - 1] < nums[mid] && nums[mid + 1] < nums[mid])
                return mid;
            else if (nums[mid - 1] < nums[mid] && nums[mid + 1] > nums[mid])
                left = mid + 1;
            else
                right = mid - 1;
        }
        return 0;
    }
};