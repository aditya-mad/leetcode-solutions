class Solution
{
public:
    long long totalCost(vector<int> &costs, int k, int candidates)
    {
        long long ans = 0;
        int l = 0, r = costs.size() - 1;
        priority_queue<int, vector<int>, greater<int>> left, right;
        while (k--)
        {
            while (left.size() < candidates && l <= r)
            {
                left.push(costs[l++]);
            }
            while (right.size() < candidates && r >= l)
            {
                right.push(costs[r--]);
            }

            int leftele = left.size() > 0 ? (left.top()) : (INT_MAX);
            int rightele = right.size() > 0 ? (right.top()) : (INT_MAX);

            if (leftele > rightele)
            {
                ans += rightele;
                right.pop();
            }
            else
            {
                ans += leftele;
                left.pop();
            }
        }
        return ans;
    }
};