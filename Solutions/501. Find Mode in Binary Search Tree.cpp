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
class Solution
{
public:
    unordered_map<int, int> memo;

    void inorder(TreeNode *root)
    {
        if (root != nullptr)
        {
            inorder(root->left);
            memo[root->val]++;
            inorder(root->right);
        }
    }

    vector<int> findMode(TreeNode *root)
    {
        int maxele = INT_MIN;
        vector<int> ans;

        inorder(root);

        for (auto x : memo)
            maxele = max(maxele, x.second);
        for (auto x : memo)
            if (x.second == maxele)
                ans.push_back(x.first);

        return ans;
    }
};