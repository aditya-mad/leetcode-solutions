class Solution
{
public:
    int getWinner(vector<int> &arr, int k)
    {
        int ans = arr[0], size = arr.size();
        int count = 0;
        for (int i = 1; i < size; i++)
        {
            if (count == k)
                break;
            else if (ans < arr[i])
            {
                ans = arr[i];
                count = 0;
            }
            count++;
        }
        return ans;
    }
};