class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> mx;
        vector<int> sx;
        mx.push_back(nums[0]);
        sx.push_back(nums[nums.size() - 1]);
        int a = nums[0];
        int b=nums[nums.size()-1];
        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] <= a) {
                mx.push_back(a);
            } else if (nums[i] > a) {
                mx.push_back(nums[i]);
                a = nums[i];
            }
            
        }
        for (int i = nums.size()-2; i >=0 ; i--) {

            if (nums[i] >= b) {
                sx.push_back(b);
            } else if (nums[i] < b) {
                sx.push_back(nums[i]);
                b = nums[i];
                
            }
            
        }
        reverse(sx.begin(),sx.end());
        for(int i=0;i<nums.size();i++){
            mx[i]=mx[i]-sx[i];
        }
        for(int i=0;i<mx.size();i++){
            if(mx[i]<=k){
                return i;
            }
        }
        return -1;
    }
};