class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a=nums[0];

         int sum=0;
         for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
         }
        int count = sum -nums.size()*a;
        return count;
    }
};