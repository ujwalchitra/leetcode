class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto i:nums){
            if(i!=0){m[i]++;}
        }
        
        return m.size();
    }
};