class Solution
{
public:
    int accountBalanceAfterPurchase(int pm)
    {
        int ans = 100;
        if (pm % 10 > 4)
            pm += 10 - (pm % 10);
        else
            pm -= (pm % 10);
        ans -= pm;
        return ans;
    }
};