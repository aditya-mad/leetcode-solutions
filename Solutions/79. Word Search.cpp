class Solution
{
public:
    bool recur(vector<vector<char>> &board, string word, vector<vector<bool>> &vis, int i, int j, int k)
    {
        if (i == word.size())
            return true;
        if (j < 0 || j >= board.size() || k < 0 || k >= board[0].size())
            return false;

        bool a = 0;
        if (board[j][k] == word[i] && vis[j][k] == 0)
        {
            vis[j][k] = 1;
            i++;
            a = recur(board, word, vis, i, j - 1, k) || recur(board, word, vis, i, j + 1, k) || recur(board, word, vis, i, j, k - 1) || recur(board, word, vis, i, j, k + 1);
            i--;
            vis[j][k] = 0;
        }
        return a;
    }
    bool exist(vector<vector<char>> &board, string word)
    {
        int m = board.size(), n = board[0].size();
        vector<vector<bool>> vis(m, vector<bool>(n, 0));
        bool ans = false;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ans |= recur(board, word, vis, 0, i, j);
            }
            if (ans)
                break;
        }
        return ans;
    }
};