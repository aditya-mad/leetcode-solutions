class Solution
{
public:
    int countHomogenous(string s)
    {
        int ans = 0, ind = 0, size = s.size();
        char memo = '0';
        for (int i = 0; i < size; i++)
        {
            if (memo == s[i])
                ind++;
            else
            {
                memo = s[i];
                ind = 1;
            }
            ans = (ans + ind) % 1000000007;
        }
        return ans;
    }
};