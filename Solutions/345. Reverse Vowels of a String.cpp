class Solution
{
public:
    string reverseVowels(string s)
    {
        int i = 0, j = s.size();
        while (i < j)
        {
            i = s.find_first_of("AaEeIiOoUu", i);
            j = s.find_last_of("AaEeIiOoUu", j);

            if (i < j)
            {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};