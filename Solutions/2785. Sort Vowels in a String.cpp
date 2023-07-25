class Solution
{
public:
    string sortVowels(string s)
    {
        string vowels;
        string ans = "";

        for (auto x : s)
        {
            if (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U' || x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
            {
                vowels.push_back(x);
            }
        }
        sort(vowels.begin(), vowels.end());
        int ind = 0;
        for (auto &x : s)
        {
            if (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U' || x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
            {
                x = vowels[ind++];
            }
        }

        return s;
    }
};