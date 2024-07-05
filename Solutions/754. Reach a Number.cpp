class Solution
{
public:
    int reachNumber(int target)
    {
        target = abs(target);
        int ans = 0;
        while (target > 0)
            target -= ++ans;
        return target % 2 == 0 ? ans : (ans % 2) + ++ans;
    }
};