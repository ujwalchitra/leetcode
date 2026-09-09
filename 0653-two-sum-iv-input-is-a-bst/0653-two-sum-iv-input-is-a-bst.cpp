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
    bool findTarget(TreeNode* root, int k) {
        unordered_map<int,int>m;
        solve(m,root);
        for(const auto &pair:m){
            int a=k-pair.first;
            if(a!=pair.first &&m.find(a)!=m.end()){
                return true;
            }
        }
        return false;
    }
    void solve(unordered_map<int,int>&m,TreeNode* root){
        if(root==NULL){
            return;
        }
        m[root->val]++;
        solve(m,root->left);
        solve(m,root->right);
    }
};