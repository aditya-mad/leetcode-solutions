class Solution
{
public:
    bool isHappy(int n)
    {
        unordered_map<int, int> nums;

        while (n != 1)
        {
            if (nums[n] > 0)
            {
                return false;
            }
            int num = 0;
            nums[n]++;
            while (n != 0)
            {
                num += ((n % 10) * (n % 10));
                n = n / 10;
            }
            if (num == 1)
            {
                return true;
            }
            n = num;
        }
        return true;
    }
};