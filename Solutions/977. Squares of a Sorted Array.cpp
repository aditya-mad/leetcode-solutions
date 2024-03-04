class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> ans;
        int ind = 0, i = nums.size() - 1;
        while (i >= ind)
        {
            int left = nums[ind] * nums[ind];
            int right = nums[i] * nums[i];
            ans.push_back(max(left, right));
            (left > right ? ind++ : i--);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};