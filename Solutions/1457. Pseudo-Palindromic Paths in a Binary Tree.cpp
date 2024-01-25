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
    int ans;

    void solve(TreeNode *root, unordered_map<int, int> &memo, int odd)
    {
        if (root == nullptr)
            return;
        memo[root->val]++;

        if (memo[root->val] % 2 == 1)
            odd++;
        else
            odd--;

        if (root->right == nullptr && root->left == nullptr && odd <= 1)
            ans++;
        solve(root->right, memo, odd);
        solve(root->left, memo, odd);
        memo[root->val]--;
    }

    int pseudoPalindromicPaths(TreeNode *root)
    {
        ans = 0;
        unordered_map<int, int> memo;
        solve(root, memo, 0);
        return ans;
    }
};