class Solution
{
public:
    int findCenter(vector<vector<int>> &edges)
    {
        vector<int> a = edges[0], b = edges[1];

        return a[0] == b[0] || a[0] == b[1] ? a[0] : a[1];
    }
};