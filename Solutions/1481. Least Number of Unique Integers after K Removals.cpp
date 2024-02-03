class Solution
{
public:
    int findLeastNumOfUniqueInts(vector<int> &arr, int k)
    {
        int ans = 0;
        unordered_map<int, int> count;
        priority_queue<int, vector<int>, greater<int>> memo;

        for (auto x : arr)
            count[x]++;
        for (auto x : count)
            memo.push(x.second);

        while (!memo.empty())
        {
            if (k - memo.top() >= 0)
            {
                k -= memo.top();
                memo.pop();
            }
            else
                break;
        }

        return memo.size();
    }
};