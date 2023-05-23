class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string ans = "";
        int i = 0, j = 0;
        while (i < word1.size() && j < word2.size())
        {
            ans += word1[i];
            ans += word2[j];
            i++;
            j++;
        }

        if (j < word2.size())
        {
            return ans + word2.substr(j);
        }
        return ans + word1.substr(i);
    }
};