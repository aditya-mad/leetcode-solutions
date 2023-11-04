class Solution
{
public:
    vector<string> buildArray(vector<int> &target, int n)
    {
        vector<string> ans;
        int size = target.size();
        for (int i = 0, num = 1; i < size; num++)
        {
            if (target[i] == num)
            {
                ans.push_back("Push");
                i++;
            }
            else
            {
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }

        return ans;
    }
};