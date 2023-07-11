class Solution
{
public:
    int balancedString(string s)
    {
        int size = s.size(), ans = size, rep = size / 4, ind = 0;
        unordered_map<char, int> memo;

        memo['Q'] = memo['W'] = memo['E'] = memo['R'] = 0;
        for (auto x : s)
            memo[x]++;

        for (int i = 0; i < size; i++)
        {
            memo[s[i]]--;
            while (memo['Q'] <= rep && memo['W'] <= rep && memo['E'] <= rep && memo['R'] <= rep && ind <= size)
            {
                ans = min(ans, i - ind + 1);
                memo[s[ind++]]++;
            }
        }
        return ans;
    }
};