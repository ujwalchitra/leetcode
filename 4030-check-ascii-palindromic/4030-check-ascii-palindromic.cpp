class Solution {
public:
    bool isPalindromic(string s) {
        string a = "";
        for (int i = 0; i < s.size(); i++) {
            a += solve(((int)s[i]));
        }

        int left=0;
        int right=a.size()-1;
        while(left<right){
            if(a[left]!=a[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    string solve(int k){
          string ans="";
           while(k>0){
              ans+=to_string(k%2);
              k=k/2;
           }
           while(ans.size()<8){
            ans.push_back('0');
           }
           reverse(ans.begin(),ans.end());
           return ans;
    }
};