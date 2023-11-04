class Solution
{
public:
    string getPermutation(int n, int k)
    {
        vector<char> nums;
        int fact = 1;
        string ans = "";

        for (int i = 1; i <= n; i++)
        {
            fact *= i;
            nums.push_back(i + '0');
        }
        fact /= n;
        k--;
        while (ans.size() != n)
        {
            int ind = k / fact;
            ans += nums[ind];
            nums.erase(nums.begin() + ind);
            k %= fact;
            if (nums.size() != 0)
                fact /= nums.size();
        }
        return ans;
    }
};