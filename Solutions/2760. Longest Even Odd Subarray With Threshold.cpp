class Solution
{
public:
    int longestAlternatingSubarray(vector<int> &nums, int threshold)
    {
        int ans = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0 && nums[i] <= threshold)
            {
                int len = 1;
                bool flag = true;
                for (int j = i + 1; j < nums.size(); j++)
                {
                    if (flag)
                    {
                        if (nums[j] % 2 == 1 && nums[j] <= threshold)
                        {
                            len++;
                            flag = false;
                        }
                        else
                        {
                            break;
                        }
                    }
                    else
                    {
                        if (nums[j] % 2 == 0 && nums[j] <= threshold)
                        {
                            len++;
                            flag = true;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
                ans = max(ans, len);
            }
        }
        return ans;
    }
};
