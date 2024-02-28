class Solution
{
public:
    int findBottomLeftValue(TreeNode *root)
    {
        int ans = 0;
        queue<TreeNode *> memo;
        memo.push(root);

        while (!memo.empty())
        {
            int size = memo.size();
            for (int i = 0; i < size; i++)
            {
                auto curr = memo.front();
                memo.pop();
                if (i == 0)
                    ans = curr->val;
                if (curr->left)
                    memo.push(curr->left);
                if (curr->right)
                    memo.push(curr->right);
            }
        }

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