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
    void bin(TreeNode* root, vector<string>& s, string level,int a) {
        if (root == NULL) {
            return;
        }
        if (a == 0) {
            level = level + to_string(root->val);
        } else {
                level = level +"->"+ to_string(root->val);
            }
        
        a=a+1;
        if (root->left == NULL && root->right == NULL) {
            s.push_back(level);
        }
        bin(root->left, s, level,a);
        bin(root->right, s, level,a);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> s;
        int a=0;
        string level = "";
        bin(root, s, level,a);
        return s;
    }
};