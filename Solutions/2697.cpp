class Solution
{
public:
    string makeSmallestPalindrome(string s)
    {
        int right = 0, left = s.size() - 1;
        vector<char> memo(s.size());
        for (int i = 0; i < s.size(); i++)
        {
            memo[i] = s[i];
        }

        while (left > right)
        {
            if (memo[left] != memo[right])
            {
                if (memo[left] > memo[right])
                {
                    memo[left] = memo[right];
                }
                else
                {
                    memo[right] = memo[left];
                }
            }
            left--;
            right++;
        }

        string ans = "";

        for (auto x : memo)
        {
            ans += x;
        }

        return ans;
    }
};