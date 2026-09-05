class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
        set<int>k;
        for(int i=0;i<nums.size();i++){
            k.insert(nums[i]);
        }
        vector<int> v;
        for (const auto& pair : m) {
            if (pair.second == 1) {
                v.push_back(pair.first);
            }
        }
        vector<int>c;
        for(int i=0;i<v.size();i++){
            int a=v[i]-1;
            int b=v[i]+1;
            if(k.find(a)==k.end()&&k.find(b)==k.end()){
                c.push_back(v[i]);
            }
        }
        return c;
        
    }
};