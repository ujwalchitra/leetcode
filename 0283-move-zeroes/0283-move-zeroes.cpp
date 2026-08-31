class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1){
            return;
        }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==0){
                int j=i+1;
                while(nums[j]==0){
                    if(j+1<nums.size()){
                    j++;}
                    else{
                        break;
                    }
                }
                swap(nums[i],nums[j]);
            }
        }
        
    }
};