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
    void second(TreeNode* root,vector<int>&v){
        if(root==NULL){
            return;
        }
        v.push_back(root->val);
        second(root->left,v);
        second(root->right,v);
    }
    int findSecondMinimumValue(TreeNode* root) {
        vector<int>v;
        second(root,v);
      sort(v.begin(),v.end());
      int a=v[0];
      int b=-1;
      for(int i=0;i<v.size();i++){
        if(v[i]>a){
            b=v[i];
            break;
        }
      }
      return b;
    }
};