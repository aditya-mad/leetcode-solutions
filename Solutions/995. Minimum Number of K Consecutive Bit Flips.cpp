class Solution
{
public:
    int minKBitFlips(vector<int> &nums, int k)
    {
        int ans = 0, size = nums.size(), flips = 0;

        for (int i = 0; i < size; i++)
        {
            if (i >= k && nums[i - k] > 1)
                nums[i - k] -= 2, flips--;
            if ((nums[i] == 0 && !(flips & 1)) || (nums[i] == 1 && (flips & 1)))
                if (i + k > size)
                    return -1;
                else
                    nums[i] += 2, flips++, ans++;
        }
        return ans;
    }
};