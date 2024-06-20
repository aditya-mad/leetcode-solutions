class Solution
{
public:
    int minDays(vector<int> &bloomDay, int m, int k)
    {
        int left = 0, right = *max_element(bloomDay.begin(), bloomDay.end()), mid;
        int ans = -1;
        if (1ll * m * k == bloomDay.size())
            return right;
        if (1ll * m * k > bloomDay.size())
            return ans;
        auto check = [&](int num)
        {
            int boq = m, fl = k;
            for (auto x : bloomDay)
            {
                if (x <= num)
                    fl--;
                else
                    fl = k;
                if (fl == 0)
                {
                    boq--;
                    fl = k;
                }
                if (boq == 0)
                    return mid;
            }
            return -1;
        };

        while (left <= right)
        {
            mid = left + (right - left) / 2;
            int val = check(mid);
            if (val == -1)
                left = mid + 1;
            else
            {
                ans = mid;
                right = mid - 1;
            }
        }

        return ans;
    }
};