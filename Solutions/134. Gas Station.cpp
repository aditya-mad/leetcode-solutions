class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        if (accumulate(gas.begin(), gas.end(), 0) < accumulate(cost.begin(), cost.end(), 0))
        {
            return -1;
        }
        int ans = 0;
        int price = 0;
        for (int i = 0; i < gas.size(); i++)
        {
            price += gas[i] - cost[i];
            if (price < 0)
            {
                ans = i + 1;
                price = 0;
            }
        }
        return ans;
    }
};