class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int a = 1;
        int sum = 1;
        vector<int> v = nums;
        for (int i = 0; i < v.size(); i++) {
            a = v[i];
            v[i] = sum;
            sum = sum * a;
        }
        int b = 1;
        int s = 1;
        for (int i = nums.size()-1; i >=0; i--) {
            b = nums[i];
            nums[i] = s;
            s = s * b;
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*v[i];
        }
        return nums;
    }
};