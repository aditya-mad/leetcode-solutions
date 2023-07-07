class Solution
{
public:
    double average(vector<int> &salary)
    {
        sort(salary.begin(), salary.end());

        double ans = accumulate(salary.begin(), salary.end(), 0) - salary[salary.size() - 1] - salary[0];
        ans /= (salary.size() - 2);
        return ans + 0.00000;
    }
};