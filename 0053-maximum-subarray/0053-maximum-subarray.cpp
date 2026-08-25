class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN;
        int k=0;
        for(int i=0;i<nums.size();i++){
                k=k+nums[i];
                sum=max(sum,k);
                if(k<0){
                   k=0;
                }
            }
        
        
        return sum;
    }
};