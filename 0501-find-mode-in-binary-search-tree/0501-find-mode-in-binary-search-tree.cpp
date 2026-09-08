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
    vector<int> findMode(TreeNode* root) {
        map<int, int> v;
        vector<int>k;
        long long n = LLONG_MIN;
        long long m = LLONG_MAX;
        solve(root, n, m, v);
        int maxi=INT_MIN;
        for (auto p : v) {
            maxi = max(maxi, p.second);
        }
        for (auto p : v) {
            if (p.second == maxi) {
                k.push_back(p.first);
            }
        }
        return k;
    }

    void solve(TreeNode* root, long long n, long long m, map<int, int>& v) {
        if (root == NULL) {
            return;
        }

        v[root->val]++;

        solve(root->left, n, root->val, v);
        solve(root->right, root->val, m, v);
    }
};