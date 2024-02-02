class Solution
{
public:
    vector<int> sequentialDigits(int low, int high)
    {
        vector<int> ans;
        string nums = "123456789";
        int size = nums.size();

        for (int i = 0; i < size; i++)
        {
            string curr = "";
            for (int j = i; j < size; j++)
            {
                curr += nums[j];
                int num = stoi(curr);

                if (num >= low && num <= high)
                    ans.push_back(num);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};