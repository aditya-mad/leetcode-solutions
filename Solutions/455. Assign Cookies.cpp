class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        int i = 0, j = 0, size = g.size(), n = s.size();
        int ans = 0;

        sort(g.rbegin(), g.rend());
        sort(s.rbegin(), s.rend());

        while (i < size && j < n)
        {
            if (g[i] <= s[j])
            {
                i++;
                j++;
                ans++;
            }
            else
                i++;
        }

        return ans;
    }
};