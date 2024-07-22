class Solution
{
public:
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {
        priority_queue<pair<int, string>> memo;
        int i = 0;
        for (i = 0; i < names.size(); i++)
            memo.push({heights[i], names[i]});
        i = 0;
        while (!memo.empty())
        {
            names[i++] = memo.top().second;
            memo.pop();
        }
        return names;
    }
};