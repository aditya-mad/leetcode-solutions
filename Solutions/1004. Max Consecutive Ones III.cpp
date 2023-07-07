class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int ans = 0, ind = 0, size = nums.size(), count = 0;

        for (int i = 0; i < size; i++)
        {
            if (nums[i] == 0)
                count++;
            while (count > k)
                if (nums[ind++] == 0)
                    count--;
            ans = max(ans, i - ind + 1);
        }

        return ans;
    }
};