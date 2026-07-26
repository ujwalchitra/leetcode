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
    void path(TreeNode* root, int targetSum, vector<vector<int>>&ans, vector<int> level,int k) {
        if(root==NULL){
            return;
        }
        k+=root->val;
        level.push_back(root->val);
        if(root->left==NULL&&root->right==NULL){
            if(k==targetSum){
                ans.push_back(level);
            }else{
                level.clear();
            }
        }
        path(root->left,targetSum,ans,level,k);
        path(root->right,targetSum,ans,level,k);

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> level;
        int k=0;
        path(root, targetSum, ans, level, k);
        return ans;
    }
};