class Solution
{
public:
    int numberOfGoodSubarraySplits(vector<int> &nums)
    {

        long long int one = 0, lcount = 0, ans = 1;
        bool ansflag = false, flag = false;
        for (auto x : nums)
        {
            if (x == 1)
            {
                ansflag = true;
                one++;
            }
            if (one > 1)
            {
                one = 1;
                ans = (ans * lcount) % 1000000007;
                lcount = 0;
                flag = false;
            }
            if (one == 1)
            {
                flag = true;
            }
            if (flag)
            {
                lcount = (lcount + 1) % 1000000007;
            }
        }
        if (ansflag)
        {
            return static_cast<int>(ans);
        }
        return 0;
    }
};