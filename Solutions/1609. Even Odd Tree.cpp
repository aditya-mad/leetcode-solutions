class Solution
{
public:
    bool isEvenOddTree(TreeNode *root)
    {
        queue<TreeNode *> memo;
        memo.push(root);

        for (int i = 0; !memo.empty(); i++)
        {
            int curr = (i % 2 == 1) ? INT_MAX : 0, size = memo.size();
            bool check, num;
            cout << "size " << size << endl;
            while (size--)
            {
                auto num = memo.front();
                check = (i % 2 == 1) ? (curr <= num->val || (num->val & 1)) : (curr >= num->val || !(num->val & 1));
                if (check)
                {
                    return false;
                }
                curr = num->val;
                if (num->left)
                    memo.push(num->left);
                if (num->right)
                    memo.push(num->right);
                memo.pop();
            }
        }

        return true;
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