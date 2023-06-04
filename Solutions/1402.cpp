class Solution
{
public:
    int maxSatisfaction(vector<int> &s)
    {
        int ans = 0, index = s.size();
        sort(s.begin(), s.end());
        for (int i = s.size() - 1, sum = 0; i > -1; i--)
        {
            sum += s[i];
            if (sum < 0)
            {
                break;
            }
            index--;
        }

        for (int i = index, mul = 1; i < s.size(); i++, mul++)
        {
            ans += (s[i] * mul);
        }
        return ans;
    }
};