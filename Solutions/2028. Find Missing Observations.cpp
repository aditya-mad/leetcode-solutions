class Solution
{
public:
    vector<int> missingRolls(vector<int> &rolls, int mean, int n)
    {
        vector<int> ans;
        int sum = mean * (rolls.size() + n) - accumulate(rolls.begin(), rolls.end(), 0);
        cout << mean * (rolls.size() + n) << " " << accumulate(rolls.begin(), rolls.end(), 0);
        if (sum <= 0 || (sum + n - 1) / n > 6 || sum / n == 0)
            return ans;
        for (int i = 0, add = sum % n; i < n; i++, add--)
            ans.push_back(sum / n + (add > 0 ? 1 : 0));
        return ans;
    }
};