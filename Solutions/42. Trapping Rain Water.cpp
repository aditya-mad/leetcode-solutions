class Solution
{
public:
    int trap(vector<int> &height)
    {
        int prev = height[0];
        vector<int> ans(height.size());

        for (int i = 1; i < height.size() - 1; i++)
        {
            if (height[i] > prev)
                prev = height[i];
            ans[i] = prev - height[i];
        }

        prev = height[height.size() - 1];

        for (int i = height.size() - 2; i > -1; i--)
        {
            if (height[i] > prev)
                prev = height[i];
            ans[i] = min(ans[i], prev - height[i]);
        }

        return accumulate(ans.begin(), ans.end(), 0);
    }
};