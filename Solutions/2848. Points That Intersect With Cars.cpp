class Solution
{
public:
    int numberOfPoints(vector<vector<int>> &nums)
    {
        vector<int> cars(102, 0);

        for (auto x : nums)
        {
            cars[x[0]]++;
            cars[x[1] + 1]--;
        }

        for (int i = 1; i < 102; i++)
            cars[i] += cars[i - 1];

        int ans = 0;

        for (auto x : cars)
            if (x > 0)
                ans++;

        return ans;
    }
};