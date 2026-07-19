class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j] &&nums.size()>=3){
                    nums.erase(nums.begin(),nums.begin()+3);
                    i=0;
                    j=0;
                    n++;

                }
                else if(nums[i]==nums[j]&&nums.size()<3){
                    nums.clear();
                    n++;
                    break;
                }
            }
        }
        return n;
    }
};