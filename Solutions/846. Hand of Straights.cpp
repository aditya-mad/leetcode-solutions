class Solution
{
public:
    bool isNStraightHand(vector<int> &hand, int groupSize)
    {
        map<int, int> memo;
        for (auto x : hand)
            memo[x]++;

        while (!memo.empty())
        {
            for (int i = 0, num = memo.begin()->first; i < groupSize; i++, num++)
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