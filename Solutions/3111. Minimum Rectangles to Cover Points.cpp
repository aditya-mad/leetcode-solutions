class Solution
{
public:
    int minRectanglesToCoverPoints(vector<vector<int>> &points, int w)
    {
        sort(points.begin(), points.end());
        int start = points[0][0], ans = 1;

        for (auto x : points)
        {
            if (x[0] - start > w)
            {
                ans++;
                start = x[0];
            }
        }

        return ans;
    }
};