class Solution
{
public:
    int numberOfBeams(vector<string> &bank)
    {
        int ans = 0, prev = 0;
        int size = bank.size();

        for (int i = 0; i < size; i++)
        {
            int curr = count(bank[i].begin(), bank[i].end(), '1');
            if (curr == 0)
                continue;
            ans += curr * prev;
            prev = curr;
        }
        return ans;
    }
};