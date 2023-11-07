class Solution
{
public:
    int eliminateMaximum(vector<int> &dist, vector<int> &speed)
    {
        int ans = 1, size = dist.size();
        for (int i = 0; i < size; i++)
            dist[i] = (dist[i] - 1) / speed[i];
        sort(dist.begin(), dist.end());

        for (int i = 1, time = 1; i < size; i++)
        {
            if (i > dist[i])
                return i;
        }

        return size;
    }
};