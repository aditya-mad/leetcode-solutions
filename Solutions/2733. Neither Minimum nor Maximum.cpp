class Solution
{
public:
    int findNonMinOrMax(vector<int> &nums)
    {
        int maxele = *max_element(nums.begin(), nums.end());
        int minele = *min_element(nums.begin(), nums.end());

        for (auto x : nums)
        {
            if (x != minele && x != maxele)
            {
                return x;
            }
        }
        return -1;
    }
};