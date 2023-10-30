class Solution
{
public:
    vector<int> sortByBits(vector<int> &arr)
    {
        auto check = [&](const int &a, const int &b)
        {
            return __builtin_popcount(a) == __builtin_popcount(b) ? a < b : __builtin_popcount(a) < __builtin_popcount(b);
        };

        sort(arr.begin(), arr.end(), check);
        return arr;
    }
};