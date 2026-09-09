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
    TreeNode* convertBST(TreeNode* root) {
        int sum=0;
        solve(sum,root);
        return root;
    }
    void solve(int &sum,TreeNode* root){
        if(root==NULL){
            return ;
        }
        solve(sum,root->right);
        sum=sum+root->val;
        root->val=sum;
        solve(sum,root->left);

    }
};