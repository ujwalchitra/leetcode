class Solution {
public:
    string longestPalindrome(string s) {
       
        string ans="";
        for(int i=0;i<s.size();i++){
            string k="";
            for(int j=i;j<s.size();j++){
                k+=s[j];
                if(solve(k)){
                    if(k.size()>ans.size()){
                        ans=k;
                    }
                }
            }
        }
        return ans;
 
    }
    bool solve(string &s){
        int left=0;
        int right=s.size()-1;
        while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};