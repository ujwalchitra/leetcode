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
    int check(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        int lf = check(root->left);
        int rf = check(root->right);
        if (lf == -1) {
            return -1;
        }
        if (rf== -1) {
            return -1;
        }
        if(abs(lf-rf)>1){
            return -1;
        }
        return max(lf, rf) + 1;
    }
    bool isBalanced(TreeNode* root) {
        int a=check(root);
        if(a==-1){
            return false;
        }
        else{
            return true;
        }
    }
};