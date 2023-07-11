class Solution
{
public:
    int totalFruit(vector<int> &fruits)
    {
        int ans = 0, ind = 0, size = fruits.size();
        unordered_map<int, int> memo;
        for (int i = 0; i < size; i++)
        {
            memo[fruits[i]]++;
            while (memo.size() > 2)
            {
                if (--memo[fruits[ind]] == 0)
                    memo.erase(fruits[ind]);
                ind++;
            }
            ans = max(ans, i - ind + 1);
        }
        return ans;
    }
};