class Solution
{
public:
    string largestOddNumber(string num)
    {
        int ind = num.size() - 1;

        while (ind > -1 && (num[ind] - '0') % 2 == 0)
            --ind;

        return ind == -1 ? "" : num.substr(0, ind + 1);
    }
};