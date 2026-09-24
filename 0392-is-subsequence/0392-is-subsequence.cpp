class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = 0;
        int a=-1;
        for (int i = 0; i < s.size(); i++) {
            for (int j = 0; j < t.size(); j++) {
                if (s[i] == t[j] && j > a) {
                    n++;
                    a=j;
                    break;
                }
            }
        }
        if(n==s.size()){
            return true;
        }
        return false;
    }
};