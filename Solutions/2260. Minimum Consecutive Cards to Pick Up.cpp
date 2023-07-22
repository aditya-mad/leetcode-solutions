class Solution
{
public:
    int minimumCardPickup(vector<int> &cards)
    {
        int ans = INT_MAX, size = cards.size();
        unordered_map<int, int> memo;

        for (int i = 0; i < size; i++)
        {
            if (memo[cards[i]] != 0)
                ans = min(ans, i - memo[cards[i]] + 2);
            memo[cards[i]] = i + 1;
        }

        return (ans == INT_MAX) ? (-1) : (ans);
    }
};