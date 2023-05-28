class Solution
{
public:
    long long minimumCost(string s)
    {
        long long int ans = 0, size = s.size();
        for (long long int i = 0; i < size - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                ans += min(size - i - 1, i + 1);
            }
        }
        return ans;
    }
};