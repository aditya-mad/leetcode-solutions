class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        int pos = 0, neg = 1, size = nums.size();
        vector<int> ans(size);

        for (int i = 0; i < size; i++)
        {
            if (nums[i] > 0)
            {
                ans[pos] = nums[i];
                pos += 2;
            }
            else
            {
                ans[neg] = nums[i];
                neg += 2;
            }
        }
        return ans;
    }
};