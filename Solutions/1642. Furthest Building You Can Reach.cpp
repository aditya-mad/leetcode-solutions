class Solution
{
public:
    int furthestBuilding(vector<int> &heights, int bricks, int ladders)
    {
        int ans = 0, size = heights.size();
        priority_queue<int, vector<int>, greater<int>> memo;

        for (int i = 0; i < size; i++)
        {
            ans = i;
            if (i == size - 1)
                break;
            if (heights[i] >= heights[i + 1])
                continue;
            memo.push(heights[i + 1] - heights[i]);
            if (memo.size() <= ladders)
                continue;
            if (bricks >= memo.top())
            {
                bricks -= memo.top();
                memo.pop();
            }
            else
                break;
        }

        return ans;
    }
};