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
    void find(TreeNode* root, unordered_map<int, int>& v) {
        if (root == NULL) {
            return;
        }
        v[root->val]++;
        find(root->left, v);
        find(root->right, v);
    }
    bool findTarget(TreeNode* root, int k) {
        unordered_map<int, int> v;
        find(root, v);
        if(v.size()<=1){
            return false;
        }
        for (auto const& pair : v) {
            int a = k - pair.first;
            if (v.count(a)) {
                if(a!=pair.first||v[a]>1){
                return true;
                break;}
            }
        }
        return false;
    }
};