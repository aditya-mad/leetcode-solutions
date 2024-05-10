class Solution
{
public:
    vector<int> kthSmallestPrimeFraction(vector<int> &arr, int k)
    {
        priority_queue<pair<double, vector<int>>> memo;
        int size = arr.size();

        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                memo.push({arr[i] * 1.0 / arr[j], {arr[i], arr[j]}});
            }
        }

        while (memo.size() != k)
            memo.pop();
        return memo.top().second;
    }
};