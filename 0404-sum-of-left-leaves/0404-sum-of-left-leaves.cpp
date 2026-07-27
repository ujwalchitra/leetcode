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
    int sum(TreeNode* root, int& count) {
        if (root == NULL) {
            return 0;
        }
        if (root->left == NULL && root->right == NULL) {
            count = count + root->val;
        }
        sum(root->left, count);
        return count;
    }
    int rum(TreeNode* root, int& c) {
        if (root == NULL) {
            return 0;
        }
        if (root->left!= NULL && root->left->left == NULL &&root->left->right==NULL) {
            c = c + root->left->val;
        }
        rum(root->left, c);
        rum(root->right, c);
        return c;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int count = 0;
        int c = 0;
        int a = sum(root, count);
        int b = rum(root, c);
        return b;
    }
};