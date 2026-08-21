class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        for(int i=0;i<strs[0].size();i++){
            char ch=strs[0][i];
            bool a=true;
            for(int j=1;j<strs.size();j++){
                if(ch!=strs[j][i]||i>strs[j].size()){
                  a=false;
                  break;
                }
            }
            if(a==true){
                s+=ch;
            }
            else{
                break;
            }
        }
        return s;
    }
};