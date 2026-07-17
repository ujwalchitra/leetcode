class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int n=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]){
                nums[i]=nums[i]+1;
                n++;
            }
            else if(nums[i-1]>nums[i]){
                int a=nums[i-1]-nums[i]+1;
                nums[i]=nums[i]+a;
                n=n+a;
            }
        }
        return n;
    }
};