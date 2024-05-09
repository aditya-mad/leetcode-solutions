class Solution
{
public:
    int minimumOperationsToMakeKPeriodic(string word, int k)
    {
        unordered_map<string, int> memo;
        int size = word.size(), ans = 0;
        for (int i = 0; i < size; i += k)
            ans = max(ans, ++memo[word.substr(i, k)]);
        return size / k - ans;
    }
};