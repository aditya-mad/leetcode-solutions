class Solution
{
public:
    string firstPalindrome(vector<string> &words)
    {
        auto check = [](const string &a)
        {
            int first = 0, last = a.size() - 1;
            while (first <= last)
                if (a[first++] != a[last--])
                    return false;
            return true;
        };

        for (auto &x : words)
            if (check(x))
                return x;
        return "";
    }
};