class Solution
{
public:
    string removeStars(string s)
    {
        string ans = "";

        for (auto x : s)
        {
            if (x != '*')
            {
                ans += x;
            }
            else
            {
                ans.pop_back();
            }
        }

        return ans;
    }
};