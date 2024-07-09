class Solution
{
public:
    double averageWaitingTime(vector<vector<int>> &customers)
    {
        double ans = 1.00000;
        long long int curr = 0, time = 0;
        for (auto x : customers)
        {
            curr = curr < x[0] ? x[0] : curr;
            curr += x[1];
            time += curr - x[0];
        }
        ans *= time;
        ans /= (int)customers.size();
        return ans * 1.00000;
    }
};