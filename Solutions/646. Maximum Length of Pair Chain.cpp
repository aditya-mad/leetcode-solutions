class Solution
{
public:
    int findLongestChain(vector<vector<int>> &pairs)
    {
        auto check = [&](const vector<int> &a, const vector<int> &b)
        {
            return a[1] < b[1];
        };

        sort(pairs.begin(), pairs.end(), check);

        int curr = pairs[0][1], size = pairs.size(), ans = 1;

        for (int i = 1; i < size; i++)
        {
            if (curr < pairs[i][0])
            {
                ans++;
                curr = pairs[i][1];
            }
        }

        return ans;
    }
};