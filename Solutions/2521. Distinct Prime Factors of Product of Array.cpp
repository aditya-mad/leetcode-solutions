class Solution
{
public:
    int distinctPrimeFactors(vector<int> &nums)
    {

        unordered_set<int> memo(nums.begin(), nums.end()), ans;

        auto prime = [&](int n)
        {
            int count = 0;
            for (int i = 2; i * i <= n; i++)
            {
                if (n % i == 0)
                    count++;
            }
            return count == 0;
        };

        for (auto x : memo)
        {
            for (int i = 2; i <= x; i++)
            {
                if (x % i == 0 && prime(i))
                    ans.insert(i);
            }
        }
        return ans.size();
    }
};