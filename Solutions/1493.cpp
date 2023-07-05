class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        int ans = 0, ind = 0, curr = 0;
        int size = nums.size();

        for (int i = 0; i < size; i++)
        {
            if (nums[i] == 0)
                curr++;

            while (curr >= 2)
                if (nums[ind++] == 0)
                    curr--;

            ans = max(ans, i - ind);
        }

        if (ans == size)
            return size - 1;
        else
            return ans;
    }
};