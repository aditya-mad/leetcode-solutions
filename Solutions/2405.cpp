class Solution
{
public:
    int partitionString(string s)
    {
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            unordered_map<char, int> memo;
            while (true)
            {
                if (memo[s[i]] <= 0)
                {
                    memo[s[i]]++;
                    i++;
                    if (i >= s.size())
                    {
                        ans++;
                        break;
                    }
                }
                else
                {
                    i--;
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};