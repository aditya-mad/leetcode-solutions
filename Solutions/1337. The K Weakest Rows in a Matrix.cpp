class Solution
{
public:
    vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
    {
        vector<int> ans;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> top;
        int count = 0;
        for (int i = 0; i < mat.size(); i++)
        {
            for (auto x : mat[i])
                if (x)
                    count++;
            top.push(make_pair(count, i));
            count = 0;
        }

        while (k--)
        {
            ans.push_back(top.top().second);
            top.pop();
        }

        return ans;
    }
};