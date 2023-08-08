class Solution
{
public:
    int shipWithinDays(vector<int> &weights, int days)
    {
        int right = accumulate(weights.begin(), weights.end(), 0), n,
            left = *max_element(weights.begin(), weights.end()), mid,
            size = weights.size();

        while (right >= left)
        {
            n = 0;
            mid = left + (right - left) / 2;
            int w = 0;
            for (int i = 0; i < size; i++)
            {
                w += weights[i];
                if (w > mid)
                {
                    n++, w = weights[i];
                }
                if (i == size - 1 && w > 0)
                    n++;
            }

            if (n <= days)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return left;
    }
};