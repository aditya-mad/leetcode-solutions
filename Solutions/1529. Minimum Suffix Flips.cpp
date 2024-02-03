class Solution
{
public:
    int minFlips(string target)
    {
        int flips = 0;
        int size = target.size();

        for (int i = 0; i < size; i++)
        {
            if ((flips & 1) && target[i] == '0')
                flips++;
            else if (!(flips & 1) && target[i] == '1')
                flips++;
        }

        return flips;
    }
};