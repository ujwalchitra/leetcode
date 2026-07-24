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
    void find(TreeNode* root, vector<int>& v) {
        if (root == NULL) {
            return;
        }
        v.push_back(root->val);
        find(root->left, v);
        find(root->right, v);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        find(root, v);
        sort(v.begin(), v.end());
        int left = 0;
        int right = v.size() - 1;
        while (left < right) {
            if (v[left] + v[right] == k) {
                return true;
                break;
            } else if (v[left] + v[right] > k) {
                right--;
            } else if (v[left] + v[right] < k) {
                left++;
            }
        }
        return false;
    }
};