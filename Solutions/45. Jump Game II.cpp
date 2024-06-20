class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int ans = 0, dist = 0, end = 0;

        for (int i = 0; i < nums.size() - 1; i++)
        {
            dist = max(dist, nums[i] + i);
            if (i == end)
            {
                end = dist;
                ans++;
            }
        }
        return ans;
    }
};