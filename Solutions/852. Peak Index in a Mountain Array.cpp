class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int right = arr.size() - 1, left = 0, mid;

        while (left <= right)
        {
            mid = left + (right - left) / 2;
            if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
            {
                return mid;
            }
            else if (arr[mid - 1] > arr[mid] && arr[mid + 1] < arr[mid])
                right = mid;
            else
                left = mid;
        }
        return 0;
    }
};