class Solution
{
public:
    int getPower(int num, int pow, int mod)
    {
        int ans = 1;

        for (int i = 0; i < pow; i++)
        {
            ans = (1LL * ans * num) % mod;
        }

        return ans;
    }

    vector<int> getGoodIndices(vector<vector<int>> &variables, int target)
    {
        vector<int> ans;
        int i = 0;
        for (auto x : variables)
        {
            int curr = getPower(getPower(x[0], x[1], 10), x[2], x[3]);
            if (curr == target)
                ans.push_back(i);
            i++;
        }

        return ans;
    }
};