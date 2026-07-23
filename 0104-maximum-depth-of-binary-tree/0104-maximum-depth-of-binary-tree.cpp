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
    void depth(TreeNode* root,int a,int &ans ){
        if(root==NULL){
            return;
        }
        ans=max(ans,a);
        depth(root->left,a+1,ans);
         depth(root->right,a+1,ans);
    }
    int maxDepth(TreeNode* root) {
        int ans=0;
        int a=1;
        depth(root,a,ans);
        return ans;
    }
};