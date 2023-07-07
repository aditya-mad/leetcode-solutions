class Solution
{
public:
    bool closeStrings(string word1, string word2)
    {
        unordered_map<char, int> memo1, memo2;
        vector<int> freq1, freq2;
        for (auto x : word1)
        {
            memo1[x]++;
        }
        for (auto x : word2)
        {
            memo2[x]++;
        }

        for (auto x : memo1)
        {
            freq1.push_back(x.second);
            if (memo2.find(x.first) == memo2.end())
            {
                return false;
            }
        }

        for (auto x : memo2)
        {
            freq2.push_back(x.second);
            if (memo1.find(x.first) == memo1.end())
            {
                return false;
            }
        }

        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        if (freq1 == freq2)
        {
            return true;
        }
        return false;
    }
};