class Solution
{
public:
    int smallestDivisor(vector<int> &nums, int threshold)
    {
        int left = 1, right = 1000000, mid;
        long long sum;
        while (left <= right)
        {
            mid = left + (right - left) / 2;
            sum = 0;
            for (double x : nums)
                sum += ceil(x / mid);
            if (sum > threshold)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return left;
    }
};