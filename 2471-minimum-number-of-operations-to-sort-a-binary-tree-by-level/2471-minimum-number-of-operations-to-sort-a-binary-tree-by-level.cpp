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
    int minimumOperations(TreeNode* root) {
        queue<TreeNode*> q;
        if (root == NULL) {
            return -1;
        }
        q.push(root);
        int count=0;
        int a=0;
        while (!q.empty()) {
            vector<int> level;
            int n = q.size();
            for (int i = 0; i < n; i++) {
                TreeNode* curr = q.front();
                q.pop();
                level.push_back(curr->val);
                if (curr->left) {
                    q.push(curr->left);
                }
                if (curr->right) {
                    q.push(curr->right);
                }
                
            }
            
          solve(level,count);
           cout<<count;
        }
        return count;

    }
    int solve(vector<int>&level,int &count){


        for(int i=0;i<level.size();i++){
            int k=i;
            for(int j=i+1;j<level.size();j++){
                if(level[j]<level[k]){
                    k=j;
                }
            }
            if(k!=i){
                count++;
                swap(level[k],level[i]);
            }
        }
        return count;
    }
};