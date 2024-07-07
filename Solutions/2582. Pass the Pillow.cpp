class Solution
{
public:
    int passThePillow(int n, int time)
    {
        time %= n * 2 - 2;
        return time < n ? time + 1 : n - (time - n) - 1;
    }
};