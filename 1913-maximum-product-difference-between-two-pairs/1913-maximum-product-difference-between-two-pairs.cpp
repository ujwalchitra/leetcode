class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max1 = nums[nums.size()-1];
        int max2 = nums[nums.size()-2];
        int min1 = nums[0];
        int min2 = nums[1];
      
        long long a=(max1*max2)-(min1*min2);
        return a;
    }
};