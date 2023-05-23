class Solution
{
public:
    int nearestValidPoint(int x, int y, vector<vector<int>> &points)
    {
        int ans = 99999, ind = -1, ret = 99999;
        for (auto coord : points)
        {
            ind++;
            if (coord[0] == x && ans > (abs(x - coord[0]) + abs(y - coord[1])))
            {
                ans = (abs(x - coord[0]) + abs(y - coord[1]));
                ret = ind;
            }
            else if (coord[1] == y && ans > (abs(x - coord[0]) + abs(y - coord[1])))
            {
                ans = (abs(x - coord[0]) + abs(y - coord[1]));
                ret = ind;
            }
        }

        if (ans == 99999)
        {
            return -1;
        }
        else
        {
            return ret;
        }
    }
};