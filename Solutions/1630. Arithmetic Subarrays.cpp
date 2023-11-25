class Solution
{
public:
    vector<bool> checkArithmeticSubarrays(vector<int> &nums, vector<int> &l, vector<int> &r)
    {
        int size = l.size();
        vector<bool> ans(size);

        auto check = [](vector<int> &arr)
        {
            sort(arr.begin(), arr.end());
            for (int i = 1; i < arr.size(); i++)
            {
                if (arr[i] - arr[i - 1] != arr[1] - arr[0])
                    return false;
            }
            return true;
        };

        for (int i = 0; i < size; i++)
        {
            vector<int> temp(nums.begin() + l[i], nums.begin() + r[i] + 1);
            ans[i] = check(temp);
        }

        return ans;
    }
};