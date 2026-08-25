class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        long long sum = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                sum = sum * nums[i];
            }
        }
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                count++;
            }
        }
        if (count > 1) {
            for (int i = 0; i < nums.size(); i++) {
                nums[i] = 0;
            }
        }

        else if (count == 1) {
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == 0) {
                    nums[i] = sum;

                } else {
                    nums[i] = 0;
                }
            }
        } else if (count == 0) {
            for (int i = 0; i < nums.size(); i++) {
                nums[i] = sum/nums[i];
            }
        }
        return nums;
    }
};