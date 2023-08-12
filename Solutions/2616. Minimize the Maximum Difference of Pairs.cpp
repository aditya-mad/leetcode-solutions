class Solution
{
public:
    int minimizeMax(vector<int> &nums, int p)
    {
        sort(nums.begin(), nums.end());
        int right = 1e9, left = 0;
        int mid, ans = right, size = nums.size();

        auto valid = [&]()
        {
            int i = 0, count = 0;
            while (size - 1 > i)
            {
                if (nums[i + 1] - nums[i] <= mid)
                {
                    count++;
                    i++;
                }
                if (count == p)
                    return true;
                i++;
            }
            return false;
        };

        while (left <= right)
        {
            mid = left + (right - left) / 2;
            if (valid())
            {
                ans = mid;
                right = mid - 1;
            }
            else
                left = mid + 1;
        }
        return p == 0 ? 0 : ans;
    }
};