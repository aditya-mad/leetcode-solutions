class Solution
{
public:
    int minSpeedOnTime(vector<int> &dist, double hour)
    {
        int size = dist.size(), right = 10000000;
        int ans = -1, mid, left = 1;
        double time;

        while (right >= left)
        {
            mid = (left + right) / 2;
            time = 0.0;
            for (int i = 0; i < size - 1; i++)
                time += ceil(((double)dist[i]) / mid);
            time += (((double)dist[size - 1]) / mid);
            if (time <= hour)
            {
                ans = mid;
                right = mid - 1;
            }
            else
                left = mid + 1;
        }

        return ans;
    }
};