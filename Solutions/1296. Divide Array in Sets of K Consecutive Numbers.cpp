class Solution
{
public:
    bool isPossibleDivide(vector<int> &nums, int k)
    {
        map<int, int> memo;
        for (auto x : nums)
            memo[x]++;

        while (!memo.empty())
        {
            for (int i = 0, num = memo.begin()->first; i < k; i++, num++)
            {
                if (memo.find(num) == memo.end())
                    return false;
                if (--memo[num] <= 0)
                    memo.erase(num);
            }
        }

        return true;
    }
};