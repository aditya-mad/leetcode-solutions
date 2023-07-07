class Solution
{
public:
    bool checkIfPangram(string sentence)
    {
        unordered_map<char, int> val;

        for (auto x : sentence)
        {
            val[x]++;
        }

        return val.size() == 26;
    }
};