class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        map<int,int>m;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto const &pair:m){
            v.push_back(pair.first);
        }
        vector<int>l;
        for(int i=v.size()-1;i>=0;i--){
            if(k>0){
                l.push_back(v[i]);
                k--;
            }
        }
        return l;
    }
};