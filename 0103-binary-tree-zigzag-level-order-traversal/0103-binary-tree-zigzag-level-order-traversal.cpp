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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == NULL) {
            return ans;
        }

        queue<TreeNode*> qt;
        qt.push(root);
        int a=1;
        while (!qt.empty()) {
            int n = qt.size();
            vector<int> level;
            for (int i = 0; i < n; i++) {
                TreeNode* node = qt.front();
                qt.pop();
                level.push_back(node->val);
                if (node->right!= NULL) {
                    qt.push(node->right);
                }
                if (node->left != NULL) {
                    qt.push(node->left);
                }
            }
            if(a%2!=0){
             reverse(level.begin(),level.end());
             }
             a++;
            ans.push_back(level);
        }
        return ans;
    }
};