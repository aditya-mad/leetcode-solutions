class Solution
{
public:
    vector<int> circularGameLosers(int n, int k)
    {
        vector<int> chance(n + 1, 0);
        vector<int> ans;
        int current = 1;
        for (int i = 1; i <= n; i++)
        {
            chance[current]++;
            if (chance[current] == 2)
                break;
            int temp = i * k;
            while (temp--)
            {
                if (current == n + 1)
                {
                    current = 1;
                }
                else
                {
                    current++;
                    if (current == n + 1)
                    {
                        current = 1;
                    }
                }
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if (chance[i] == 0)
            {
                ans.push_back(i);
            }
        }

        return ans;
    }
};