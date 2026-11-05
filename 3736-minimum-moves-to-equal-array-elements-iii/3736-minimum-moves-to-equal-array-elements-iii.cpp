class Solution {
public:
    int minMoves(vector<int>& nums) {
        int k=INT_MIN;
        for(int i=0;i<nums.size();i++){
            k=max(k,nums[i]);
        }
        int count=0;
        for(int i=0;i<nums.size();i++){
            count=count+k-nums[i];
        }
        return count;
    }
};