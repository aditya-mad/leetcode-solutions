class Solution
{
public:
    string maximumOddBinaryNumber(string s)
    {
        sort(s.rbegin(), s.rend());
        int ind = count(s.begin(), s.end(), '1') - 1;
        swap(s[ind], s[s.size() - 1]);
        return s;
    }
};