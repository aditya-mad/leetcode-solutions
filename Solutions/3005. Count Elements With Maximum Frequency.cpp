class Solution
{
public:
    int maxFrequencyElements(vector<int> &nums)
    {
        int maxfre = 0, ans = 0;
        unordered_map<int, int> memo;
        for (auto x : nums)
            maxfre = max(maxfre, ++memo[x]);
        for (auto x : memo)
            if (x.second == maxfre)
                ans++;
        ans *= maxfre;
        return ans;
    }
};