class Solution
{
public:
    bool winnerOfGame(string colors)
    {
        int alice = 0, bob = 0, size = colors.size() - 1;

        for (int i = 1; i < size; i++)
        {
            if (colors[i] == 'A' && colors[i + 1] == 'A' && colors[i - 1] == 'A')
                alice++;
            else if (colors[i] == 'B' && colors[i + 1] == 'B' && colors[i - 1] == 'B')
                bob++;
        }

        return alice > bob;
    }
};