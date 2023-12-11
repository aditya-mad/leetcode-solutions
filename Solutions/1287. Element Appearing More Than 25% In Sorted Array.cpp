class Solution
{
public:
    int findSpecialInteger(vector<int> &arr)
    {
        int size = arr.size();
        int ans = arr[0], freq = 1, rep = size / 4;

        for (int i = 1; i < size; i++)
        {
            if (arr[i] != arr[i - 1])
                freq = 0;
            freq++;
            if (freq > rep)
            {
                ans = arr[i];
                break;
            }
        }
        return ans;
    }
};