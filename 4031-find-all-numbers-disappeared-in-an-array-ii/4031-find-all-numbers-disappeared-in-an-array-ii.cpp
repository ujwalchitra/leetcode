class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower,
                                               int upper) {
        sort(nums.begin(), nums.end());

        vector<int> v;
        for (int i = lower; i <= upper; i++) {
            v.push_back(i);
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= lower && nums[i] <= upper) {
                v.push_back(nums[i]);
            }
        }

        map<int, int> m;
        for (int i = 0; i < v.size(); i++) {
            m[v[i]]++;
        }
        vector<int> a;
        for (const auto& pair : m) {
            if (pair.second == 1) {
                a.push_back(pair.first);
            }
        }
        vector<vector<int>> ans;
        if (!a.empty()) {
            int h = a[0];
            int l = a[0];
            for (int i = 1; i < a.size(); i++) {
                if (a[i] == a[i - 1] + 1) {
                    h = a[i];
                } else {
                    vector<int> c;
                    c.push_back(l);
                    c.push_back(h);
                    ans.push_back(c);
                    h = a[i];
                    l = a[i];
                }
            }
        
        vector<int> c;
        c.push_back(l);
        c.push_back(h);
        ans.push_back(c);
        }
        return ans;
    }
};