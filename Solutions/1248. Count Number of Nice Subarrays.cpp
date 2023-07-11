class Solution
{
public:
    int numberOfSubarrays(vector<int> &nums, int k)
    {
        int size = nums.size();

        auto count = [&](int odds) -> int
        {
            int ans = 0, ind = 0, ele = 0;
            for (int i = 0; i < size; i++)
            {
                if (nums[i] & 1)
                    ele++;
                while (ele > odds)
                    if (nums[ind++] & 1)
                        ele--;
                ans += i - ind + 1;
            }
            return ans;
        };

        return count(k) - count(k - 1);
    }
};