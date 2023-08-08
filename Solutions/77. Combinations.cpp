class Solution
{
public:
    vector<vector<int>> combine(int n, int k)
    {
        vector<vector<int>> ans;
        int times = (1 << n), i = 0;

        while (times--)
        {
            if (__builtin_popcount(times) == k)
            {
                ans.push_back({});
                int num = times;
                while (num != 0)
                {
                    ans[i].push_back(__builtin_ctz(num) + 1);
                    num &= (num - 1);
                }
                i++;
            }
        }
        return ans;
    }
};