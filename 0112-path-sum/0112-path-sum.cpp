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
class Solution {
public:
    bool has(TreeNode* root, int targetSum,int curr){
        if(root==NULL){
            return false;
        }
        curr=curr+root->val;
        if(root->left==NULL&&root->right==NULL){
            return curr==targetSum;
        }
        bool l=has(root->left,targetSum,curr);
        bool r=has(root->right,targetSum,curr);
        if(l||r){
            return true;
        }
        else{
            return false;
        }
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int curr=0;
        return has(root,targetSum,curr);
    }
};