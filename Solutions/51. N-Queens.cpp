class Solution
{
public:
    bool validate(vector<string> &board, int r, int c)
    {
        int row = r, col = c;
        while (row > -1 && col > -1)
            if (board[row--][col--] == 'Q')
                return false;
        row = r;
        col = c;
        while (col > -1)
            if (board[row][col--] == 'Q')
                return false;
        row = r;
        col = c;
        while (col > -1 && row < board.size())
            if (board[row++][col--] == 'Q')
                return false;
        return true;
    }

    void solve(vector<vector<string>> &ans, vector<string> &board, int col)
    {
        if (col == board.size())
        {
            ans.push_back(board);
            return;
        }
        for (int i = 0; i < board.size(); i++)
        {
            if (validate(board, i, col))
            {
                board[i][col] = 'Q';
                solve(ans, board, col + 1);
                board[i][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));
        solve(ans, board, 0);
        return ans;
    }
};