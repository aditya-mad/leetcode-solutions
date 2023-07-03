class Solution
{
public:
    vector<int> survivedRobotsHealths(vector<int> &positions, vector<int> &healths, string directions)
    {
        int size = directions.size();
        vector<pair<int, int>> memo(size);
        stack<pair<int, int>> all;
        vector<int> ans;
        for (int i = 0; i < size; i++)
            memo[i] = make_pair(positions[i], i);

        sort(memo.begin(), memo.end());

        for (int i = 0; i < size; i++)
        {
            if (all.empty() || directions[all.top().second] == directions[memo[i].second] || directions[all.top().second] == 'L')
            {
                all.push(memo[i]);
            }
            else
            {
                while (true)
                {
                    if (all.empty() || directions[all.top().second] == directions[memo[i].second] || directions[all.top().second] == 'L')
                    {
                        all.push(memo[i]);
                        break;
                    }
                    if (healths[memo[i].second] == healths[all.top().second])
                    {
                        all.pop();
                        break;
                    }
                    else if (healths[memo[i].second] < healths[all.top().second])
                    {
                        healths[all.top().second]--;
                        break;
                    }
                    else
                    {
                        healths[memo[i].second]--;
                        all.pop();
                    }
                }
            }
        }

        memo.clear();

        while (!all.empty())
        {
            memo.push_back(make_pair(all.top().second, all.top().first));
            all.pop();
        }
        sort(memo.begin(), memo.end());
        for (auto x : memo)
        {
            ans.push_back(healths[x.first]);
        }
        return ans;
    }
};