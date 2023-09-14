class Solution
{
public:
    int countDigits(int num)
    {
        map<int, int> memo;
        int temp = num;
        while (temp != 0)
        {
            memo[temp % 10]++;
            temp /= 10;
        }

        int ans = 0;

        temp = num;

        while (temp != 0)
        {
            if (num % (temp % 10) == 0)
                ans++;
            temp /= 10;
        }

        return ans;
    }
};