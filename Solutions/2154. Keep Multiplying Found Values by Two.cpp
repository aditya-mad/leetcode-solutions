class Solution
{
public:
    int findFinalValue(vector<int> &nums, int original)
    {
        bool flag = true;

        while (flag)
        {
            flag = false;
            for (auto x : nums)
                if (x == original)
                    flag = true;
            if (flag)
                original *= 2;
        }

        return original;
    }
};