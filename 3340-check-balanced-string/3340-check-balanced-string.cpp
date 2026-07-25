class Solution {
public:
    bool isBalanced(string num) {
        int a = 0;
        int b = 0;
        for (int i = 0; i < num.size(); i++) {
            if (i % 2 == 0) {
                int c = num[i] - '0';
                a = a + c;
            }
            if (i % 2 != 0) {
                int c = num[i] - '0';
                b = b + c;
            }
        }
        if(a==b){
            return true;
        }else{
            return false;
        }
    }
};