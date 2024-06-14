class Solution
{
public:
    vector<vector<int>> ans;

    void solve(vector<int> &nums, vector<int> arr, int target, int sum, int ind)
    {
        if (sum == target)
        {
            ans.push_back(arr);
            return;
        }
        if (sum > target)
            return;

        for (int i = ind; i < nums.size(); i++)
        {
            arr.push_back(nums[i]);
            solve(nums, arr, target, sum + nums[i], i);
            arr.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        solve(candidates, {}, target, 0, 0);
        return ans;
    }
};