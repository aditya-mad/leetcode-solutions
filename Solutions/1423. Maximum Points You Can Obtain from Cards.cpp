class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        int ans = 0, size = cardPoints.size(), curr = 0;

        for (int i = 0; i < k; i++)
            curr += cardPoints[i];
        ans = curr;

        for (int i = k - 1, ind = size - 1; i > -1; i--, ind--)
        {
            curr = curr - cardPoints[i] + cardPoints[ind];
            ans = max(ans, curr);
        }
        return ans;
    }
};