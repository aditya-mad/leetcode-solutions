int val;
bool validate(vector<int> &a, vector<int> &b)
{
    return a[val] > b[val];
}

class Solution
{
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>> &score, int k)
    {
        val = k;
        sort(score.begin(), score.end(), validate);
        return score;
    }
};