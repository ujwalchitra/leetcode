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
    void small(TreeNode* root, vector<string>& s, string ans) {
        if (root == NULL) {
            return;
        }
        ans= char('a'+ root->val)+ans;
        if (root->left == NULL && root->right == NULL) {
            s.push_back(ans);
        }
        small(root->left, s, ans);
        small(root->right, s, ans);
    }
    string smallestFromLeaf(TreeNode* root) {
        vector<string> s;
        string ans = "";
        small(root, s, ans);
       
            sort(s.begin(),s.end());
            string u=s[0];
            return u;
    }
};