class Solution
{
public:
    bool canVisitAllRooms(vector<vector<int>> &rooms)
    {
        const int size = rooms.size();
        bool visited[size];
        for (int i = 0; i < size; i++)
        {
            visited[i] = false;
        }
        stack<int> keys;
        visited[0] = true;
        for (int i = 0; i < rooms[0].size(); i++)
        {
            keys.push(rooms[0][i]);
        }
        while (keys.size() != 0)
        {
            int num = keys.top();
            visited[num] = true;
            keys.pop();

            for (int i = 0; i < rooms[num].size(); i++)
            {
                if (visited[rooms[num][i]] == false)
                {
                    keys.push(rooms[num][i]);
                }
            }
        }

        for (int i = 0; i < size; i++)
        {
            if (visited[i] != true)
            {
                return false;
            }
        }
        return true;
    }
};