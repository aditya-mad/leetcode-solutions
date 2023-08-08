class Solution
{
public:
    int countCompleteSubarrays(vector<int> &nums)
    {
        unordered_set<int> memo(nums.begin(), nums.end());
        int dis = memo.size(), size = nums.size(), ans = 0;

        for (int i = 0; i < size; i++)
        {
            unordered_set<int> temp;
            for (int j = i; j < size; j++)
            {
                temp.insert(nums[j]);
                if (temp.size() == dis)
                    ans++;
            }
        }
        return ans;
    }
};