class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a = -1;
        sort(nums.begin(),nums.end());
        for (int i = 1; i < nums.size(); i = i + 3) {
            if(nums[i]!=nums[i-1]){
              a=nums[i-1];
              break;
            }
        }
        if(a==-1){
            a=nums[nums.size()-1];
        }
        return a;
    }
};