class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        unordered_map<int, int> memo;
        int ans = 0;
        for (auto x : nums)
            memo[x]++;

        for (auto x : memo)
        {
            if (x.second == 1)
                return -1;
            else
            {
                if (x.second % 3 == 0)
                    ans += x.second / 3;
                else if (x.second % 3 == 2)
                    ans += x.second / 3 + 1;
                else
                {
                    int temp = x.second / 3 - 1;
                    x.second -= temp * 3;
                    ans += x.second / 2;
                    ans += temp;
                }
            }
        }

        return ans;
    }
};