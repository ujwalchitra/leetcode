class Solution {
public:
    bool isPalindrome(string s) {

        string g = "";
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                g += tolower(s[i]);
            }
        }
        if(g.size()<=1){
            return true;
        }
        int left=0;
        int right=g.size()-1;
        while(left<=right){
            if(g[left]!=g[right]){
                cout<<g[left]<<g[right];
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};