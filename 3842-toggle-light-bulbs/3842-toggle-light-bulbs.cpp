class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        map<int,int>m;
        for(int i=0;i<bulbs.size();i++){
            m[bulbs[i]]++;
        }
        vector<int>v;
        for(const auto &pair:m){
            if(pair.second%2!=0){
                v.push_back(pair.first);
            }
        }
        return v;
    }
};