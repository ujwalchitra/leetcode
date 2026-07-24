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
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> ans;
        if (root == NULL) {
            return ans;
        }
        st.push(root);
        while (!st.empty()) {
            TreeNode* a = st.top();
            st.pop();
            ans.push_back(a->val);
            if (a->right != NULL) {
                st.push(a->right);
            }
            if (a->left != NULL) {
                st.push(a->left);
            }

        }
        return ans;
    }
};