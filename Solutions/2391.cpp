class Solution
{
public:
    int garbageCollection(vector<string> &garbage, vector<int> &travel)
    {
        int ans = 0, size = garbage.size(), m, p, g;
        bool flag1 = true, flag2 = true, flag3 = true;

        for (int i = size - 1; i > -1; i--)
        {
            ans += garbage[i].size();

            if (flag1 || flag2 || flag3)
            {
                for (auto x : garbage[i])
                {
                    if (flag1 && x == 'M')
                    {
                        flag1 = false;
                        m = i;
                    }
                    if (flag2 && x == 'P')
                    {
                        flag2 = false;
                        p = i;
                    }
                    if (flag3 && x == 'G')
                    {
                        flag3 = false;
                        g = i;
                    }
                }
            }
        }

        if (!flag1)
            for (int i = 0; i < m; i++)
                ans += travel[i];

        if (!flag2)
            for (int i = 0; i < p; i++)
                ans += travel[i];

        if (!flag3)
            for (int i = 0; i < g; i++)
                ans += travel[i];

        return ans;
    }
};