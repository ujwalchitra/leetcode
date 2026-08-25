class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<int>v;
        while(k>0){
            int a=0;
            int b=0;
            for(const auto &pair:m){
                  if(b<=pair.second){
                    b=pair.second;
                    a=pair.first;
                  }
            }
            m.erase(a);
            v.push_back(a);
            k--;

        }
        return v;
    }
};