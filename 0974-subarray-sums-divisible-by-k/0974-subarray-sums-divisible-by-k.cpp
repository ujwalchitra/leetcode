class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        m[0]=1;
        int count=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            int r=0;
            sum=sum+nums[i];
            r=sum%k;
            if(r<0){
                r=r%k+k;
            }
            if(m.find(r)!=m.end()){
                count=count+m[r];
            }
            m[r]++;
        }
        return count;
    }
};