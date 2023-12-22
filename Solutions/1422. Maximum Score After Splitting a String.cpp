class Solution
{
public:
    int maxScore(string s)
    {
        int one = 0, ans = 0, size = s.size() - 1;
        int zero = 0;
        for (auto x : s)
            if (x == '1')
                one++;

        for (int i = 0; i < size; i++)
        {
            if (s[i] == '0')
                zero++;
            else if (s[i] == '1')
                one--;
            ans = max(ans, zero + one);
        }

        return ans;
    }
};