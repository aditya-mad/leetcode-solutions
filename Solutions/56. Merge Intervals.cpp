class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        int ind = 0, size = intervals.size();
        vector<vector<int>> ans;

        sort(intervals.begin(), intervals.end());
        ans.push_back(intervals[0]);

        for (int i = 1; i < size; i++)
        {
            if (intervals[i][0] > ans[ind][1])
            {
                ind++;
                ans.emplace_back(intervals[i]);
            }
            else
            {
                ans[ind][1] = max(ans[ind][1], intervals[i][1]);
                ans[ind][0] = min(ans[ind][0], intervals[i][0]);
            }
        }
        return ans;
    }
};