class Solution
{
public:
    int minimumIndex(vector<int> &nums)
    {

        unordered_map<int, int> memo;
        int maxele = -1, rep = 0, size = nums.size();
        for (auto x : nums)
        {
            memo[x]++;
            maxele = (memo[maxele] > memo[x]) ? (maxele) : (x);
        }

        for (int i = 0; i < size; i++)
        {
            if (nums[i] == maxele)
                rep++;

            if (rep * 2 > i + 1 && (memo[maxele] - rep) * 2 > size - i - 1)
            {
                return i;
            }
        }
        return -1;
    }
};