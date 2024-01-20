class Solution
{
public:
    int sumSubarrayMins(vector<int> &arr)
    {
        int n = arr.size();
        stack<vector<int>> ls, rs;
        vector<int> left(n), right(n);
        int cnt = 1;
        for (int i = 0; i < n; i++)
        {
            int cnt = 1;
            while (!ls.empty() && ls.top()[0] > arr[i])
            {
                cnt += ls.top()[1];
                ls.pop();
            }
            ls.push({arr[i], cnt});
            left[i] = cnt;
        }
        while (!ls.empty())
            ls.pop();
        for (int i = n - 1; i > -1; i--)
        {
            int cnt = 1;
            while (!ls.empty() && ls.top()[0] >= arr[i])
            {
                cnt += ls.top()[1];
                ls.pop();
            }
            ls.push({arr[i], cnt});
            right[i] = cnt;
        }

        const int mod = 1e9 + 7;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = (ans + ((long long)arr[i] * left[i] * right[i])) % mod;
        }
        return ans;
    }
};