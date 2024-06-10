class Solution
{
public:
    int heightChecker(vector<int> &heights)
    {
        int ans = 0, size = heights.size();
        vector<int> memo(101, 0);
        for (auto x : heights)
            memo[x]++;
        for (int i = 0, ind = 0; i < size; i++)
        {
            while (memo[ind] <= 0)
                ind++;
            if (ind != heights[i])
                ans++;
            memo[ind]--;
        }

        return ans;
    }
};