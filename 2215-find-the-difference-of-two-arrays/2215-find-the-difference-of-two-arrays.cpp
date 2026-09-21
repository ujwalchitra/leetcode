class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> m;
        unordered_set<int> n;
        unordered_set<int> k;
        unordered_set<int> l;

        for (int i = 0; i < nums1.size(); i++) {
            m.insert(nums1[i]);
        }

        for (int i = 0; i < nums2.size(); i++) {
            n.insert(nums2[i]);
        }

        vector<int> c;
        vector<int> v;
        vector<vector<int>> ans;

        for (int i = 0; i < nums2.size(); i++) {
            if (m.find(nums2[i]) != m.end()) {
                continue;
            } else {
                k.insert(nums2[i]);
            }
        }

        for (int i = 0; i < nums1.size(); i++) {
            if (n.find(nums1[i]) != n.end()) {
                continue;
            } else {
                l.insert(nums1[i]);
            }
        }

        for (const auto& x : k) {
            c.push_back(x);
        }

        for (const auto& x : l) {
            v.push_back(x);
        }

        ans.push_back(v);
        ans.push_back(c);

        return ans;
    }
};