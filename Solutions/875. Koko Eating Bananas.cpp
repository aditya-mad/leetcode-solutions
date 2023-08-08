class Solution
{
public:
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int right = 1000000000, mid, left = 1;
        long hours;

        while (right >= left)
        {
            mid = left + (right - left) / 2;
            hours = 0;

            for (auto x : piles)
                hours = hours + ceil((double)x / mid);
            if (hours <= h)
                right = mid - 1;
            else
                left = mid + 1;
        }

        return left;
    }
};