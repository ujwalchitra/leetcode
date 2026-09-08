/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<int> c;
        vector<int> v;
        solve(root, p, c);
        dsolve(root, q, v);
        int a=-1;
        int n=0;
        if(v.size()<=c.size()){
            n=v.size();
        }else{
            n=c.size();
        }
        for(int i=0;i<n;i++){
            if(c[i]==v[i]){
                a=c[i];
            }
        }
        TreeNode *node=new TreeNode(a);
        return node;
    }
    void solve(TreeNode* root, TreeNode* p, vector<int>& c) {
        if (root == NULL) {
            return;
        }
        c.push_back(root->val);
        if (root == p) {
            return;
        }
        if (p->val < root->val) {
            solve(root->left, p, c);
        } else {
            solve(root->right, p, c);
        }
    }
        void dsolve(TreeNode* root, TreeNode* q, vector<int>& v) {
        if (root == NULL) {
            return;
        }
        v.push_back(root->val);
        if (root == q) {
            return;
        }
        if (q->val < root->val) {
            dsolve(root->left, q, v);
        } else {
            dsolve(root->right, q, v);
        }
    }
};