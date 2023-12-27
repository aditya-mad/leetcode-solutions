class Solution
{
public:
    int minCost(string colors, vector<int> &neededTime)
    {
        int ans = 0, size = colors.size();
        int curr = 0, currmin = 0, i = 0, ind = 0;

        while (i < size)
        {
            curr = neededTime[i];
            currmin = curr;
            ind = i;
            while (i < size && colors[++i] == colors[ind])
            {
                curr += neededTime[i];
                currmin = max(currmin, neededTime[i]);
            }
            ans = curr == currmin ? ans : ans + curr - currmin;
        }

        return ans;
    }
};