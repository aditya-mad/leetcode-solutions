class Solution
{
public:
    int ans = 0;
    void solve(TreeNode *root, int maxval, int minval)
    {
        if (root == NULL)
            return;
        ans = max({ans, abs(maxval - root->val), abs(minval - root->val)});
        solve(root->left, max(root->val, maxval), min(minval, root->val));
        solve(root->right, max(root->val, maxval), min(minval, root->val));
    }

    int maxAncestorDiff(TreeNode *root)
    {
        solve(root, root->val, root->val);
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
