class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>v(gain.size()+1);
        v[0]=0;
        for(int i=0;i<gain.size();i++){
            v[i+1]=gain[i]+v[i];
        }
        int ans=0;
        for(int i=0;i<v.size();i++){
            ans=max(ans,v[i]);
        }
        return ans;
    }
};