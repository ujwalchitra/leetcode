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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> q;
        if(root==NULL){
            return ans;

        }
        float a=0.0;
        q.push(root);
        while(!q.empty()){
            double a = 0.0;
            double c = 0;
            int n = q.size();
            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();
                a = a + node->val;
                c++;
                if (node->left != NULL) {
                    q.push(node->left);
                }
                if (node->right != NULL) {
                    q.push(node->right);
                }

            } 
            ans.push_back(double(a/c));
        }
        return ans;
    }
};