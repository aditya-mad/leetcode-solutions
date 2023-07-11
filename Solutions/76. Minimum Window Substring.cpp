class Solution
{
public:
    string minWindow(string s, string t)
    {
        int size = s.size(), ind = 0, same = 0, tar = t.size();
        int start = 19, end = INT_MAX - 20;
        bool flag = false;
        unordered_map<char, int> memo, val;

        for (auto x : t)
            memo[x]++;

        for (int i = 0; i < size; i++)
        {
            val[s[i]]++;
            if (val[s[i]] <= memo[s[i]])
                same++;
            while (same == tar && ind <= i)
            {
                flag = true;
                if (i - ind + 1 < end - start + 1)
                    start = ind, end = i;
                val[s[ind]]--;
                if (val[s[ind]] < memo[s[ind++]])
                    same--;
            }
        }

        return (flag) ? (s.substr(start, end - start + 1)) : ("");
    }
};