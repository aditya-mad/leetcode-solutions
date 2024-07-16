class Solution
{
public:
    bool solve(TreeNode *root, int n, string &p)
    {
        if (!root)
            return false;
        if (root->val == n)
            return true;
        if (solve(root->left, n, p))
        {
            p += 'L';
            return true;
        }
        if (solve(root->right, n, p))
        {
            p += 'R';
            return true;
        }
        return false;
    }
    string getDirections(TreeNode *root, int startValue, int destValue)
    {
        string ans = "", stor = "", rtod = "";
        solve(root, startValue, stor);
        solve(root, destValue, rtod);

        int i = stor.size() - 1, j = rtod.size() - 1;
        while (i > -1 && j > -1 && stor[i] == rtod[j])
            i--, j--;
        while (i-- > -1)
            ans += 'U';
        while (j > -1)
            ans += rtod[j--];
        return ans;
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */