class Solution
{
public:
    int bagOfTokensScore(vector<int> &tokens, int power)
    {
        int ans = 0, curr = 0, right = tokens.size() - 1, left = 0;
        sort(tokens.begin(), tokens.end());
        while (left <= right)
        {
            if (tokens[left] <= power)
            {
                power -= tokens[left++];
                ans = max(ans, ++curr);
            }
            else if (curr > 0)
            {
                power += tokens[right--];
                curr--;
            }
            else
                break;
        }

        return ans;
    }
};