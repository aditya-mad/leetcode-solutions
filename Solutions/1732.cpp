class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        int ans = 0, now = 0;
        for (auto x : gain)
        {
            now += x;
            ans = max(ans, now);
        }
        return ans;
    }
};