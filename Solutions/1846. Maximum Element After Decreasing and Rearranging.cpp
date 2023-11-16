class Solution
{
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        int size = arr.size(), ans;
        arr[0] = 1;

        for (int i = 1; i < size; i++)
        {
            if (arr[i] - arr[i - 1] <= 1)
                continue;
            arr[i] = arr[i - 1] + 1;
        }

        return arr[size - 1];
    }
};