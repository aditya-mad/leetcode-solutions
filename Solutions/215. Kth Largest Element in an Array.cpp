class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        priority_queue<int> memo;

        for (auto x : nums)
            memo.push(x);
        while (k-- > 1)
            memo.pop();

        return memo.top();
    }
};