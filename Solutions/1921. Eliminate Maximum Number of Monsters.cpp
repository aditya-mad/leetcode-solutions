class Solution
{
public:
    int eliminateMaximum(vector<int> &dist, vector<int> &speed)
    {
        int size = dist.size();
        for (int i = 0; i < size; i++)
            dist[i] = ceil(dist[i] / (speed[i] * 1.0));

        sort(dist.begin(), dist.end());

        for (int i = 1; i < size; i++)
        {
            if (i >= dist[i])
                return i;
        }
        return size;
    }
};