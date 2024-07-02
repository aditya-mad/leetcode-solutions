class Solution
{
public:
    int ans = 0;
    TreeNode *bstToGst(TreeNode *root)
    {
        if (root->right)
            bstToGst(root->right);
        ans = root->val = ans + root->val;
        if (root->left)
            bstToGst(root->left);
        return root;
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
