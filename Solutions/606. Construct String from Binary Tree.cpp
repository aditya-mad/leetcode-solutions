class Solution
{
public:
    string ans;

    void preorder(TreeNode *root)
    {
        bool left = false, right = false;
        if (root != NULL)
        {
            ans += to_string(root->val);
            if (root->left == NULL)
            {
                if (root->right == NULL)
                    return;
                else
                    ans += "()";
            }
            else
            {
                ans += '(';
                left = true;
            }
            preorder(root->left);
            if (left)
                ans += ')';
            if (root->right != NULL)
            {
                ans += '(';
                right = true;
            }
            preorder(root->right);
            if (right)
                ans += ')';
        }
    }

    string tree2str(TreeNode *root)
    {
        ans = "";
        preorder(root);
        return ans;
    }
};