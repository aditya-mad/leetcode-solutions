class Solution
{
public:
    long long maximumPoints(vector<int> &enemyEnergies, int currentEnergy)
    {
        long long int mini = *min_element(enemyEnergies.begin(), enemyEnergies.end()),
                      sum = accumulate(enemyEnergies.begin(), enemyEnergies.end(), 0LL) - mini + currentEnergy;
        return currentEnergy >= mini ? sum / mini : 0;
    }
};