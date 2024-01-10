class Solution
{
public:
    int ans = 0;
    int solve(TreeNode *root, int node)
    {
        if (root == nullptr)
            return 0;

        int left = solve(root->left, node);
        int right = solve(root->right, node);
        int depth = 0;

        if (root->val == node)
        {
            ans = max(left, right);
            depth = -1;
        }
        else if (left >= 0 && right >= 0)
        {
            depth = max(left, right) + 1;
        }
        else
        {
            int dist = abs(left) + abs(right);
            ans = max(ans, dist);
            depth = min(left, right) - 1;
        }
        return depth;
    }
    int amountOfTime(TreeNode *root, int start)
    {
        solve(root, start);
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
