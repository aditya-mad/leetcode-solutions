class Solution
{
public:
    int longestSemiRepetitiveSubstring(string s)
    {
        int size = s.size(), ans = 1;

        if (size < 3)
            return size;

        for (int i = 1; i < size - 1; i++)
        {
            int pairs = 0, len = 1;
            for (int j = i; j < size; j++)
            {
                if (s[j] == s[j - 1])
                    pairs++;
                if (pairs == 2)
                    break;
                len++;
            }
            ans = max(ans, len);
        }

        return ans;
    }
};