class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        int a=1;
        int i=0;
        while(i!=nums.size()){
             
             if(nums[i]>0&&nums[i]<=nums.size()&&nums[i]!=nums[nums[i]-1]){
                long long ci=nums[i]-1;
                swap(nums[i],nums[ci]);
             }
             else{
                i++;
             }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=a){
                break;
            }
            else{
                a++;
            }
        }
        return a;
    }
};