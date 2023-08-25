class Solution
{
public:
    string toHex(int num)
    {
        string ans = "", memo = "0123456789abcdef";
        unsigned int n = num;
        while (n != 0)
        {
            ans = memo[n & 15] + ans;
            n >>= 4;
        }
        return (num == 0) ? ("0") : (ans);
    }
};