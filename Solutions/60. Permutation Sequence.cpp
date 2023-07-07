class Solution
{
public:
    string getPermutation(int n, int k)
    {
        string ans = "";

        for (int i = '1'; i < n + '1'; i++)
            ans = ans + (char)i;
        while (--k && next_permutation(ans.begin(), ans.end()))
            ;

        return ans;
    }
};