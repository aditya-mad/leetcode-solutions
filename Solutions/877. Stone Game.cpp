class Solution
{
public:
    vector<vector<int>> dp;
    int solve(int right, int left, int size, vector<int> &nums)
    {
        if (right >= size || left < 0)
            return 0;
        if (dp[left][right] != -1)
            return dp[left][right];
        return dp[left][right] = max({nums[right] + solve(right + 2, left, size, nums), nums[left] + solve(right, left - 2, size, nums), nums[right] + solve(right + 1, left - 1, size, nums), nums[left] + solve(right + 1, left - 1, size, nums)});
    }
    bool stoneGame(vector<int> &piles)
    {
        int size = piles.size();
        dp.resize(size, vector<int>(size, -1));
        int ans = max({piles[0] + solve(2, size - 1, size, piles), piles[size - 1] + solve(0, size - 3, size, piles), piles[0] + solve(1, size - 2, size, piles), piles[size - 1] + solve(1, size - 2, size, piles)});
        return ans > accumulate(piles.begin(), piles.end(), 0) - ans;
    }
};