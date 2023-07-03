class Solution
{
public:
    int sumDistance(vector<int> &nums, string s, int d)
    {
        long long int ans = 0, sum = 0;
        int size = s.size();
        for (int i = 0; i < size; i++)
        {
            if (s[i] == 'R')
                nums[i] += d;
            else
                nums[i] -= d;
        }

        sort(nums.begin(), nums.end());

        for (int i = 0; i < size; i++)
        {
            ans = (ans + i * (long long int)nums[i] - sum) % 1000000007;
            sum = (sum + nums[i]) % 1000000007;
        }

        return ans;
    }
};