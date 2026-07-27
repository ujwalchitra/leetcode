class Solution {
public:
    int maxProduct(int n) {
        vector<int>v;
        string a=to_string(n);
        for(char i:a){
            int k=i-'0';
            v.push_back(k);
        }
        sort(v.begin(),v.end());
        int t=v[v.size()-1];
        int u=v[v.size()-2];
        return u*t;
    }
};