class Solution
{
public:
    vector<int> rank;
    vector<int> parent;

    int find(int u)
    {
        // int p = parent[u];
        // while(p != parent[p]) {parent[p] = parent[parent[p]]; p = parent[p];}
        // return p;
        if (u == parent[u])
            return u;
        return parent[u] = find(parent[u]);
    }

    bool findunion(int u, int v)
    {
        int p1 = find(u), p2 = find(v);
        if (p1 == p2)
            return false;
        if (rank[p1] > rank[p2])
            parent[p2] = p1, rank[p1] += rank[p2];
        else
            parent[p1] = p2, rank[p2] += rank[p1];
        return true;
    }

    vector<int> findRedundantConnection(vector<vector<int>> &edges)
    {
        rank = vector<int>(edges.size() + 1, 1);
        parent = vector<int>(edges.size() + 1);
        iota(parent.begin(), parent.end(), 0);

        for (auto ans : edges)
            if (!findunion(ans[0], ans[1]))
                return ans;

        return {};
    }
};