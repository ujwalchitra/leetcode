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
    int mon(TreeNode* root,int count,int &ans){
        if(root==NULL){
           return 0;
        }
        count=count+1;
        if(root->left==NULL&&root->right==NULL){
            ans=min(ans,count);
            return ans;
    
        }
        mon(root->left,count,ans);
        mon(root->right,count,ans);
        return ans;
    }
    int minDepth(TreeNode* root) {
        int count=0;
        int ans=INT_MAX;
       int a= mon(root,count,ans);
       return a;
        
    }
};