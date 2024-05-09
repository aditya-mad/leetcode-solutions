class Solution
{
public:
    long long maximumHappinessSum(vector<int> &happiness, int k)
    {
        long long int ans = 0;

        sort(happiness.rbegin(), happiness.rend());
        for (int i = 0; i < k && happiness[i] - i > 0; i++)
            ans += happiness[i] - i;

        return ans;
    }
};