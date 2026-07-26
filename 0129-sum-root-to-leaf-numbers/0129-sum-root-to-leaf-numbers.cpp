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
    void sum(TreeNode* root,vector<string>&s,string ans){
        if(root==NULL){
            return ;
        }
        ans+=to_string(root->val);
        if(root->left==NULL&&root->right==NULL){
            s.push_back(ans);
        }
        sum(root->left,s,ans);
        sum(root->right,s,ans);
    }
    int sumNumbers(TreeNode* root) {
        vector<string>s;
        string ans="";
        sum(root,s,ans);
        int count=0;
        for(int i=0;i<s.size();i++){
            count=count+stoi(s[i]);
        }
        return count;
    }
};