class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> left(nums.size(), -1);
        vector<int> right(nums.size(),-1);
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            left[i] = sum;
            sum = sum + nums[i];
        }
        sum = 0;
        for (int i = nums.size()-1; i >=0 ; i--) {
            right[i] = sum;
            sum = sum + nums[i];
        }
        int k=-1;
        for(int i=0;i<left.size();i++){
            if(left[i]==right[i]){
                k=i;
                break;
            }
        }
        return k;

    }
};