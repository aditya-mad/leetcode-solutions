class Solution
{
public:
    int distanceTraveled(int mainTank, int additionalTank)
    {
        int ans = 0, used = 0;
        while (mainTank != 0)
        {
            mainTank--;
            ans++;
            used++;
            if (used == 5 && additionalTank > 0)
            {
                used = 0;
                mainTank++;
                additionalTank--;
            }
        }

        return ans * 10;
    }
};