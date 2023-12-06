class Solution
{
public:
    int totalMoney(int n)
    {
        int ans = 0, curr = 1;

        for (int i = 0; i < n; i++)
        {
            if (i % 7 == 0 && curr != 1)
                curr -= 6;
            ans += curr;
            curr++;
        }

        return ans;
    }
};