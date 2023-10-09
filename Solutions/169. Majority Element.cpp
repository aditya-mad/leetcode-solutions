class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int size = nums.size(), count = 0, ans = nums[0];

        for (auto x : nums)
        {
            if (x == ans)
                count++;
            else
                count--;

            if (count == 0)
            {
                count = 1;
                ans = x;
            }
        }

        return ans;
    }
};