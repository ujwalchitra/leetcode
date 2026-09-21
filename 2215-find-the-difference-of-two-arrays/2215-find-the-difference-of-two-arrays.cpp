class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m;
        unordered_map<int, int> n;
        unordered_map<int, int> k;
        unordered_map<int, int> l;
        for (int i = 0; i < nums1.size(); i++) {
            m[nums1[i]]++;
        }
        for (int i = 0; i < nums2.size(); i++) {
            n[nums2[i]]++;
        }
        vector<int> c;
        vector<int> v;
        vector<vector<int>> ans;
        for (int i = 0; i < nums2.size(); i++) {
            if (m.find(nums2[i]) != m.end()) {
                continue;
            } else {
                k[nums2[i]]++;
            }
        }
        for (int i = 0; i < nums1.size(); i++) {
            if (n.find(nums1[i]) != n.end()) {
                continue;
            } else {
                l[nums1[i]]++;
            }
        }
        for (const auto& pair : k) {
            c.push_back(pair.first);
        }
        for (const auto& pair : l) {
            v.push_back(pair.first);
        }
        ans.push_back(v);
        ans.push_back(c);
        return ans;
    }
};