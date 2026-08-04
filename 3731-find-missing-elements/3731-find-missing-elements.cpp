class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int a=INT_MAX;
        int b=INT_MIN;
        for(int i=0;i<nums.size();i++){
            a=min(a,nums[i]);
            b=max(b,nums[i]);
        }
        vector<int>v;
        for(int i=a;i<=b;i++){
             if(find(nums.begin(),nums.end(),i)==nums.end()){
                v.push_back(i);
             }
        }
        return v;
    }
};