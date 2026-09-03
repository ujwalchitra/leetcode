class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 != 0) {
                nums[i] =1;
            }
            if (nums[i] % 2 == 0) {
                nums[i] = 0;
            }
        }


        unordered_map<int,int>m;
        m[0]=1;
        int sum=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            int r=sum-k;
            if(m.find(r)!=m.end()){
                count=count+m[r];
            }
            m[sum]++;
        }
        return count;

    }
};