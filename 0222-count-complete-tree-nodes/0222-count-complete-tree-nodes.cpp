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
    int countNodes(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int l = lo(root);
        int r = ri(root);
        if(l==r){
            return (1<<l)-1;
        }
        return 1+countNodes(root->left)+countNodes(root->right);
    }
    int lo(TreeNode* root) {
        int curr = 0;
        while (root) {
            curr++;
            root = root->left;
        }
        return curr;
    }
    int ri(TreeNode* root) {
        int curr = 0;
        while (root) {
            curr++;
            root = root->right;
        }
        return curr;
    }
};