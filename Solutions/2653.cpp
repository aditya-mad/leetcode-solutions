class Solution
{
public:
    vector<int> getSubarrayBeauty(vector<int> &nums, int k, int x)
    {
        int size = nums.size();
        vector<int> ans;
        unordered_map<int, int> memo;
        for (int i = -50; i <= 50; i++)
        {
            memo[i] = 0;
        }

        for (int i = 0; i < k - 1; i++)
        {
            memo[nums[i]]++;
        }

        for (int i = k - 1; i < nums.size(); i++)
        {
            memo[nums[i]]++;
            int temp = 0;
            for (int j = -50; j <= 50; j++)
            {
                temp += memo[j];
                if (temp >= x)
                {
                    if (j < 0)
                    {
                        ans.push_back(j);
                    }
                    else
                    {
                        ans.push_back(0);
                    }
                    break;
                }
            }
            memo[nums[i - k + 1]]--;
        }
        return ans;
    }
};