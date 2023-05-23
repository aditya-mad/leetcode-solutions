class Solution
{
public:
    bool doesValidArrayExist(vector<int> &derived)
    {

        int prev = 0, now;
        for (int i = 1; i < derived.size(); i++)
        {
            now = prev ^ derived[i - 1];
            prev = now;
        }
        return ((prev ^ 0) == derived[derived.size() - 1]);
    }
};