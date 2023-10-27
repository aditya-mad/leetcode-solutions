class Solution
{
public:
    long long getDescentPeriods(vector<int> &prices)
    {
        long long ans = 1;
        int count = 1, size = prices.size();

        for (int i = 1; i < size; i++)
        {
            if (prices[i - 1] - 1 == prices[i])
                count++;
            else
                count = 1;
            ans += count;
        }

        return ans;
    }
};