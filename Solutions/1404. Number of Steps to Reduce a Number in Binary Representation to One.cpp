class Solution
{
public:
    int numSteps(string s)
    {
        int size = s.size() - 1, ans = 0, carry = 0;

        for (int i = size; i > 0; i--)
        {
            if (s[i] - '0' + carry == 1)
                carry = 1, ans += 1;
        }

        return ans + size + carry;
    }
};