/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        long long n = LLONG_MIN;
        long long m = LLONG_MAX;

        return solve(root, n, m);
    }
    bool solve(TreeNode* root, long long n, long long m) {
        if (root == NULL) {
            return true;
        }
        if (root->val <= n || root->val >= m) {
            return false;
        }
        return solve(root->left, n, root->val)&&solve(root->right, root->val, m);
    }
};