class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=i+1;j<nums.size();j++){
                count=(nums[i]-1)*(nums[j]-1);
                s=max(s,count);
            }
        }
        return s;
    }
};