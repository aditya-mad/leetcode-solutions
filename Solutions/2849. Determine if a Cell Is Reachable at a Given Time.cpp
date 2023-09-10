class Solution
{
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t)
    {

        if (abs(fx - sx) == 0 && abs(fy - sy) == 0)
            if (t == 1)
                return false;
            else
                return true;

        return max(abs(fx - sx), abs(fy - sy)) <= t;
    }
};