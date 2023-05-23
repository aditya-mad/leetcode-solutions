class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int ans = 0, buy = 0, sell = 1;
        if (prices.size() == 1)
        {
            return 0;
        }
        while (buy < prices.size() && sell < prices.size())
        {
            if (prices[buy] < prices[sell])
            {
                ans = max(ans, (prices[sell] - prices[buy]));
            }
            else
            {
                buy = sell;
            }
            sell++;
        }
        return ans;
    }
};