class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int times = (1 << nums.size());
        while (times--)
        {
            vector<int> memo;
            int iter = times;
            int ind = 0;
            while (iter != 0)
            {
                if (iter & 1)
                {
                    memo.push_back(nums[ind]);
                }
                iter >>= 1;
                ind++;
            }
            ans.push_back(memo);
        }
        return ans;
    }
};