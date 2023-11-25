class Solution
{
public:
    int maxCoins(vector<int> &piles)
    {
        sort(piles.rbegin(), piles.rend());
        int size = piles.size() / 3 * 2, ans = 0;

        for (int i = 1; i < size; i += 2)
            ans += piles[i];

        return ans;
    }
};