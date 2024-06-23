class Solution
{
public:
    int longestSubarray(vector<int> &nums, int limit)
    {
        deque<int> inc, dec;
        int ans = 0, size = nums.size();

        for (int i = 0, ind = 0; i < size; i++)
        {
            while (!inc.empty() && inc.back() < nums[i])
                inc.pop_back();
            while (!dec.empty() && dec.back() > nums[i])
                dec.pop_back();
            inc.push_back(nums[i]);
            dec.push_back(nums[i]);

            while (!inc.empty() && !dec.empty() && inc.front() - dec.front() > limit)
            {
                if (nums[ind] == inc.front())
                    inc.pop_front();
                if (nums[ind] == dec.front())
                    dec.pop_front();
                ind++;
            }

            ans = max(ans, i - ind + 1);
        }

        return ans;
    }
};