class Solution {
public:
    bool pre(string s) {
        int a = stoi(s) ;
        if (a <= 1) {
            return false;
        }
        for (int i = 2; i * i <= a; i++) {
            if (a %i == 0) {
                return false;
            }
        }
        return true;
    }
    bool completePrime(int num) {

        string s = to_string(num) ;
        int k = 0;
        for (int i = 0; i < s.size(); i++) {
            string a = s.substr(0, i + 1);
            if (pre(a)==false) {
                k=-1;
                break;
            }
        }
        int m=0;
        string l = to_string(num) ;
        for (int i = 0; i < l.size(); i++) {
            string a = l.substr( i);
            if (pre(a)==false) {
                m = -1;
                break;
            }
        }
        if(m==0&&k==0){
            return true;
        }else{
            return false;
        }
    }
};