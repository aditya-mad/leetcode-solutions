class Solution
{
public:
    vector<int> minOperations(string boxes)
    {
        int size = boxes.size();
        vector<int> ans(size, 0);

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (boxes[j] == '1' && i != j)
                {
                    ans[i] += abs(i - j);
                }
            }
        }

        return ans;
    }
};