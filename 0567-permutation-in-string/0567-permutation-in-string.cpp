class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        if(n>m){
            return false;
        }
        sort(s1.begin(),s1.end());
        for(int i=0;i<m;i++){
            string a=s2.substr(i,n);
            sort(a.begin(),a.end());
            if(s1==a){
                return true;
                break;
            }
        }
        return false;
    }
};