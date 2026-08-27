class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int>s;
        for(int i=1;i<1000;i++){
            if(i%k==0){
                s.push_back(i);
            }
        }
        sort(s.begin(),s.end());
        int a=0;
        set<int>v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%k==0){
                v.insert(nums[i]);
            }
        }
        for(int i=0;i<s.size();i++){
            if(v.find(s[i])==v.end()){
                a=s[i];
                break;
            }
        }
        return a;
    }
};