class Solution
{
public:
    int maxConsecutiveAnswers(string answerKey, int k)
    {
        int ans = INT_MIN, indt = 0, indf = 0, changef = 0, changet = 0;
        int i = 0, size = answerKey.length();

        for (i = 0; i < size; i++)
        {
            if (answerKey[i] == 'F')
            {
                if (changef < k)
                    changef++;
                else
                    while (answerKey[indf++] != 'F')
                        ;
            }
            ans = max(ans, i - indf + 1);
            if (answerKey[i] == 'T')
            {
                if (changet < k)
                    changet++;
                else
                    while (answerKey[indt++] != 'T')
                        ;
            }
            ans = max(ans, i - indt + 1);
        }
        ans = max(ans, i - indf);
        ans = max(ans, i - indt);
        return ans;
    }
};