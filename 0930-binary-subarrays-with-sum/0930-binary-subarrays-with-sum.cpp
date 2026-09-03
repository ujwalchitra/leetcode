class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count=0;
        int sum=0;
        unordered_map<int,int>m;
        m[0]=1;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            
            int k=sum-goal;
            if(m.find(k)!=m.end()){
                count=count+m[k];
            }
            m[sum]++;
        }
        return count;
    }
};