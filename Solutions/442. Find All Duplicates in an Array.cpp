class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        int size = nums.size(), prime = 100003;
        vector<int> ans;

        for (auto x : nums)
        {
            int temp = (x % prime) - 1;
            if (nums[temp] > prime)
                ans.push_back(temp + 1);
            nums[temp] += prime;
        }

        return ans;
    }
};