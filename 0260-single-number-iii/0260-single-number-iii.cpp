class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       
        if (nums.size() == 2) {
            return {nums[0],nums[1]};
        }
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum^=nums[i];
        }
    long long n = sum ^ (sum & (sum - 1)); 
        
        int b=0;
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(n&nums[i]){
                b=b^nums[i];
            }else{
                c=c^nums[i];
            }
        }
        return {b,c};

    }
};