class Solution
{
public:
    string getHint(string secret, string guess)
    {
        unordered_map<char, int> memo;
        int bulls = 0, cows = 0, size = secret.size();

        for (int i = 0; i < size; i++)
        {
            if (secret[i] == guess[i])
                bulls++;
            else
                memo[secret[i]]++;
        }

        for (int i = 0; i < size; i++)
        {
            if (memo[guess[i]] > 0 && guess[i] != secret[i])
            {
                memo[guess[i]]--;
                cows++;
            }
        }

        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};