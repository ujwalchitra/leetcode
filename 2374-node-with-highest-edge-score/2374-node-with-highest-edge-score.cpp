class Solution {
public:
    int edgeScore(vector<int>& edges) {
        int n=edges.size();
        vector<long long>v(n,0);
        for(long long i=0;i<n;i++){
            v[edges[i]]+=i;
        }
        long long  ans=-1;
        long long k=-1;
        for(int i=0;i<v.size();i++){
            if(v[i]>k){
               k=v[i];
               ans=i;
            }
        }
        return ans;
    }
};