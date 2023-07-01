class Solution
{
public:
    int maxOperations(vector<int> &nums, int k)
    {
        unordered_map<int, int> memo;
        int ans = 0, temp;

        for (auto x : nums)
            memo[x]++;

        for (auto x : nums)
        {
            if (memo[x] != 0)
            {
                memo[x]--;
                if (memo[k - x] > 0)
                {
                    ans++;
                    memo[k - x]--;
                }
            }
        }
        return ans;
    }
};