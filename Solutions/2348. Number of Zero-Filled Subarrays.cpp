class Solution
{
public:
    long long zeroFilledSubarray(vector<int> &nums)
    {
        long long int ans = 0;
        int curr = 0;

        for (auto x : nums)
        {
            if (x == 0 && ++curr)
                ans += curr;
            else
                curr = 0;
        }

        return ans;
    }
};