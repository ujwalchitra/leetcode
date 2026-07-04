class Solution {
public:
    int minimizedStringLength(string s) {
        map<char,char>m;
        for(char c:s){
             m[c]++;
        }
        string ans="";
         return m.size();
    }
};