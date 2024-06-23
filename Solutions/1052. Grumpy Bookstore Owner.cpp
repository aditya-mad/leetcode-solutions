class Solution
{
public:
    int maxSatisfied(vector<int> &customers, vector<int> &grumpy, int minutes)
    {
        int ans = 0, i = 0, maxsum = 0, ind = 0, size = grumpy.size();
        int curr = 0;
        for (int i = 0, ind = 0; i < size; ind++, i++)
        {
            ans += grumpy[i] == 0 ? customers[i] : 0;
            curr += grumpy[i] == 1 ? customers[i] : 0;
            if (i < minutes)
            {
                maxsum = curr;
                ind = -1;
                continue;
            }
            curr -= grumpy[ind] == 1 ? customers[ind] : 0;
            maxsum = max(maxsum, curr);
        }

        return ans + maxsum;
    }
};