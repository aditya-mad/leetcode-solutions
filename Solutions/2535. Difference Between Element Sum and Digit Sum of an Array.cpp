class Solution
{
public:
    int differenceOfSum(vector<int> &nums)
    {
        int total = 0, dig = 0;

        for (auto x : nums)
        {
            total += x;
            string temp = to_string(x);
            for (auto y : temp)
                dig = dig + y - '0';
        }

        return abs(total - dig);
    }
};