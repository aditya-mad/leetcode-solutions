class Solution
{
public:
    unordered_map<int, int> memo;
    bool findTarget(TreeNode *root, int k)
    {
        if (!root)
            return false;
        if (memo[k - root->val] > 0)
            return true;
        memo[root->val]++;
        return findTarget(root->left, k) || findTarget(root->right, k);
    }
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
};