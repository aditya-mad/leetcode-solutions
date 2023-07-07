class Solution
{
public:
    int maxProfit(vector<int> &p)
    {
        int ans = 0;
        if (p.size() == 1)
            return 0;
        else if (p.size() == 2)
        {
            if (p[0] > p[1])
                return 0;
            return p[1] - p[0];
        }
        else
        {
            for (int i = 1; i < p.size(); i++)
            {
                if (p[i - 1] < p[i])
                {
                    ans += p[i] - p[i - 1];
                }
            }
        }
        return ans;
    }
};