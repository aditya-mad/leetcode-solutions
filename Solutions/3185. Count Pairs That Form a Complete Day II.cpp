class Solution
{
public:
    long long countCompleteDayPairs(vector<int> &hours)
    {
        long long ans = 0;
        unordered_map<int, int> memo;
        for (auto x : hours)
        {
            ans += memo[(24 - x % 24) % 24];
            memo[x % 24]++;
        }
        return ans;
    }
};