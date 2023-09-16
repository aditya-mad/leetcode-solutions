class Solution
{
public:
    int minimumRightShifts(vector<int> &nums)
    {
        vector<int> temp(nums.begin(), nums.end());
        int size = nums.size(), ans = 0;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < size; i++)
        {
            if (temp == nums)
                return ans;
            else
                ans++;
            rotate(temp.rbegin(), temp.rbegin() + 1, temp.rend());
        }

        return -1;
    }
};