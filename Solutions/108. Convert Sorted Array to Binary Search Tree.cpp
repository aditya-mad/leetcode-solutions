class Solution
{
public:
    TreeNode *solve(vector<int> &nums, int l, int r)
    {
        int mid = (l + r) / 2;
        if (l > r || l < 0 || r >= nums.size())
            return NULL;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = solve(nums, l, mid - 1);
        root->right = solve(nums, mid + 1, r);
        return root;
    }
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return solve(nums, 0, nums.size() - 1);
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