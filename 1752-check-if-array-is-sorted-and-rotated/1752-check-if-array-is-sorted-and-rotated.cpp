class Solution {
public:
    bool check(vector<int>& nums) {
        int k = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] >= nums[i - 1]) {
                k++;
            } else {
                break;
            }
        }

        reverse(nums.begin(), nums.begin() + k+1);
        reverse(nums.begin() + k+1, nums.end());
        reverse(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1]) {
                return false;
            } 
        }
        return true;
    }
};