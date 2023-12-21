class Solution
{
public:
    int maxWidthOfVerticalArea(vector<vector<int>> &points)
    {
        sort(points.begin(), points.end());
        int size = points.size(), ans = 0;

        for (int i = 1; i < size; i++)
            ans = max(ans, points[i][0] - points[i - 1][0]);
        return ans;
    }
};