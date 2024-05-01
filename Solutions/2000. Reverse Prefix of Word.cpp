class Solution
{
public:
    string reversePrefix(string word, char ch)
    {
        int ind = find(word.begin(), word.end(), ch) - word.begin() + 1;
        if (ind <= word.size())
            reverse(word.begin(), word.begin() + ind);
        return word;
    }
};