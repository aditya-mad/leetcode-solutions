class Solution
{
public:
    int eraseOverlapIntervals(vector<vector<int>> &intervals)
    {

        auto compare = [&](vector<int> &first, vector<int> &second) -> bool
        {
            return first[1] < second[1];
        };
        sort(intervals.begin(), intervals.end(), compare);

        int ans = 0, prev = intervals[0][1], size = intervals.size();

        for (int i = 1; i < size; i++)
        {
            if (intervals[i][0] >= prev)
                prev = intervals[i][1];
            else
                ans++;
        }

        return ans;
    }
};