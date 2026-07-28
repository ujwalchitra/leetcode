class Solution {
public:
    string smallestPalindrome(string s) {
        if (s.size() <= 1) {
            return s;
        }
        int a=0;
        string ans1 = "";
        string ans2 = "";
        if(s.size()%2==0){
        a = (s.size() ) / 2;}
        else{
             a=(s.size()-1)/2;        }
        for (int i = 0; i < a; i++) {
            ans1 += s[i];
        }
        sort(ans1.begin(), ans1.end());
        ans2 = ans1;
        reverse(ans2.begin(), ans2.end());
        if (s.size() % 2 != 0) {
            return {ans1 + s[a] + ans2};
        } else {
            return ans1 + ans2;
        }
    }
};