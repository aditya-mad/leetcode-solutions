class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        if (nums.empty())
            return {};

        vector<string> ans;
        string temp = to_string(nums[0]);
        int prev = nums[0], count = 1;

        for (int i = 1; i < nums.size(); i++)
        {
            if (prev + 1 == nums[i])
                count++;
            else
            {
                if (count > 1)
                    temp += "->" + to_string(prev);
                ans.push_back(temp);
                count = 1;
                temp = to_string(nums[i]);
            }
            prev = nums[i];
        }

        if (count == 1)
            ans.push_back(temp);
        else
            ans.push_back(temp + "->" + to_string(nums[nums.size() - 1]));

        return ans;
    }
};