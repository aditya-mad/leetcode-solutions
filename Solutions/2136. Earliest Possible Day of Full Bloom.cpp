class Solution
{
public:
    int earliestFullBloom(vector<int> &plantTime, vector<int> &growTime)
    {
        int ans = 0, maxt = 0, size = plantTime.size();
        vector<pair<int, int>> all;
        vector<int> planted(size);
        for (int i = 0; i < size; i++)
        {
            all.push_back(make_pair(growTime[i], plantTime[i]));
            ans += plantTime[i];
        }
        sort(all.rbegin(), all.rend());
        planted[0] = 0;
        for (int i = 1; i < size; i++)
        {
            planted[i] = planted[i - 1] + all[i - 1].second;
        }

        for (int i = 0; i < size; i++)
        {
            if (all[i].first + all[i].second + planted[i] > ans)
            {
                maxt = max(maxt, all[i].first + all[i].second + planted[i] - ans);
            }
        }

        return ans + maxt;
    }
};