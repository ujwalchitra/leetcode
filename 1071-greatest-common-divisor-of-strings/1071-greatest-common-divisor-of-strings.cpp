class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string s=str1+str2;
        string k=str2+str1;
        if(s!=k){
            return "";
        }
        int a=gcd(str1.size(),str2.size());
        string l="";
        for(int i=0;i<a;i++){
            l+=str2[i];
        }
        return l;
    }
};