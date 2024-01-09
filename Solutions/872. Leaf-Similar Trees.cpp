class Solution
{
public:
    void solve(TreeNode *root, vector<int> &nums)
    {
        if (root)
        {
            if (root->left == NULL && root->right == NULL)
            {
                nums.push_back(root->val);
                return;
            }
            solve(root->left, nums);
            solve(root->right, nums);
        }
    }

    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        vector<int> one, two;
        solve(root1, one);
        solve(root2, two);

        return one == two;
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