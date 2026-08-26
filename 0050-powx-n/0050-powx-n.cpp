class Solution {
public:
    double myPow(double x, int n) {
        long long b = n;
        double c=1;
        if(b<0){
            x=1/x;
            b=-b;
        }
        while (b > 0) {
            if (b % 2 == 1){
                c=c*x;
                
                }
                x=x*x;
                b=b/2;
        }

        return c;
    }
};