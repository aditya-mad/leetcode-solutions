class Solution
{
public:
    bool isPathCrossing(string path)
    {
        unordered_set<string> memo;
        int x = 0, y = 0;
        memo.insert("0,0");

        for (auto i : path)
        {
            if (i == 'N')
                y++;
            else if (i == 'S')
                y--;
            else if (i == 'E')
                x++;
            else
                x--;

            auto coord = to_string(x) + "," + to_string(y);
            cout << coord << endl;

            if (memo.find(coord) != memo.end())
                return true;
            memo.insert(coord);
        }
        return false;
    }
};