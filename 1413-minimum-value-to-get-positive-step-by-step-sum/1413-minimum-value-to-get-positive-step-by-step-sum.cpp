class Solution {
public:
    int minStartValue(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i]=nums[i-1]+nums[i];
        }
        int a=INT_MAX;
        for(int i=0;i<nums.size();i++){
            a=min(a,nums[i]);
        }
        if(a<1){
            return (a*-1)+1;
        }
         return 1;
        
    }
};