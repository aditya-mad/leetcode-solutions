class Solution
{
public:
    vector<int> targetIndices(vector<int> &nums, int target)
    {
        int more = 0, less = 0, ind = 0;
        for (auto x : nums)
        {
            if (x > target)
                more++;
            if (x < target)
                less++;
            ind++;
        }

        ind -= more;
        vector<int> ans(ind - less);

        for (int i = 0; less < ind; i++)
            ans[i] = less++;

        return ans;
    }
};