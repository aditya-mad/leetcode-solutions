class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int right = 0, left = height.size() - 1, ans = 0;
        while (right < left)
        {
            ans = max(ans, (min(height[right], height[left]) * (left - right)));
            if (height[right] >= height[left])
            {
                left--;
            }
            else
            {
                right++;
            }
        }
        return ans;
    }
};