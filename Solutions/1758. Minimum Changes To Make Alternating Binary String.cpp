class Solution
{
public:
    int minOperations(string s)
    {
        char letter = '0';
        int ans1 = 0, ans2 = 0;

        for (auto x : s)
        {
            if (x == letter)
                ans1++;
            else
                ans2++;
            letter = letter == '0' ? '1' : '0';
        }

        return min(ans1, ans2);
    }
};