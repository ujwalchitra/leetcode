class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> a;
        vector<int> b;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= 0) {
                a.push_back(nums[i]);
            } else {
                b.push_back(nums[i]);
            }
        }
        vector<int> ans(nums.size(), 0);
        int j = 0;
        for (int i = 0; i < nums.size(); i = i + 2) {
            nums[i] = a[j++];
        }
        int k = 0;
        for (int i = 1; i < nums.size(); i = i + 2) {
            nums[i] = b[k++];
        }
        return nums;
    }
};