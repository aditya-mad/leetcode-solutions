class Solution
{
public:
    TreeNode *createBinaryTree(vector<vector<int>> &descriptions)
    {
        unordered_map<int, int> freq;
        unordered_map<int, TreeNode *> memo;
        int ans;
        for (auto x : descriptions)
        {
            if (memo.find(x[0]) == memo.end())
                memo[x[0]] = new TreeNode(x[0]);
            if (memo.find(x[1]) == memo.end())
                memo[x[1]] = new TreeNode(x[1]);
            x[2] == 1 ? memo[x[0]]->left = memo[x[1]] : memo[x[0]]->right = memo[x[1]];
            freq[x[0]], freq[x[1]]++;
        }

        for (auto x : freq)
            if (x.second == 0)
            {
                ans = x.first;
                break;
            }
        return memo[ans];
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
