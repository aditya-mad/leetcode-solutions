class Solution
{
public:
    int timeRequiredToBuy(vector<int> &tickets, int k)
    {
        int ans = tickets[k], size = tickets.size();

        for (int i = 0; i < size; i++)
        {
            if (i == k)
                continue;
            else if (i < k)
                ans += min(tickets[i], tickets[k]);
            else
                ans += min(tickets[i], tickets[k] - 1);
        }

        return ans;
    }
};